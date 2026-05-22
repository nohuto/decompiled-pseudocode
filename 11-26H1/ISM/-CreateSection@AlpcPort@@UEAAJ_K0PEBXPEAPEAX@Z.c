/*
 * XREFs of ?CreateSection@AlpcPort@@UEAAJ_K0PEBXPEAPEAX@Z @ 0x1801113C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z @ 0x180110540 (-Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z.c)
 *     ?FindSection@SipcPort@@IEAAPEAVSipcSection@@AEBVSipcSectionId@@@Z @ 0x1801118F0 (-FindSection@SipcPort@@IEAAPEAVSipcSection@@AEBVSipcSectionId@@@Z.c)
 *     ?InitializeFromData@SipcSectionId@@QEAAJ_KPEBX@Z @ 0x1801121BC (-InitializeFromData@SipcSectionId@@QEAAJ_KPEBX@Z.c)
 *     ?IsInitialized@SipcSectionId@@QEBA_NXZ @ 0x180112378 (-IsInitialized@SipcSectionId@@QEBA_NXZ.c)
 *     ?PushFront@?$NtList@VSipcSection@@@@QEAAXPEAVSipcSection@@@Z @ 0x1801128E8 (-PushFront@-$NtList@VSipcSection@@@@QEAAXPEAVSipcSection@@@Z.c)
 *     SipcFailFast @ 0x18011347C (SipcFailFast.c)
 */

__int64 __fastcall AlpcPort::CreateSection(
        AlpcPort *this,
        unsigned __int64 a2,
        ULONG cbInput,
        PUCHAR pbInput,
        void **a5)
{
  __int64 result; // rax
  NTSTATUS v8; // ecx
  void *v9; // r9
  __int64 v10; // r9
  int v11; // ecx
  struct AlpcSection *v12; // [rsp+30h] [rbp-38h] BYREF
  UCHAR pbBuffer[16]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v14; // [rsp+48h] [rbp-20h]

  *(_OWORD *)pbBuffer = 0LL;
  *a5 = 0LL;
  v14 = 0LL;
  if ( pbInput )
  {
    result = SipcSectionId::InitializeFromData((SipcSectionId *)pbBuffer, cbInput, pbInput);
    if ( (int)result >= 0 )
    {
      if ( SipcPort::FindSection(this, (const struct SipcSectionId *)pbBuffer) )
      {
        return 2147942487LL;
      }
      else
      {
LABEL_8:
        v9 = (void *)*((_QWORD *)this + 6);
        v12 = 0LL;
        result = AlpcSection::Create(this, a2, (const struct SipcSectionId *)pbBuffer, v9, &v12);
        if ( (int)result >= 0 )
        {
          NtList<SipcSection>::PushFront((char *)this + 8, v12);
          result = 0LL;
          *a5 = *(void **)(v10 + 32);
        }
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v8 = BCryptGenRandom(0LL, pbBuffer, 0x20u, 2u);
      if ( v8 < 0 )
        break;
      if ( !SipcSectionId::IsInitialized((SipcSectionId *)pbBuffer) )
      {
        SipcFailFast(2147549183LL);
        __debugbreak();
      }
      if ( !SipcPort::FindSection(this, (const struct SipcSectionId *)pbBuffer) )
        goto LABEL_8;
    }
    v11 = v8 | 0x10000000;
    result = 2147549183LL;
    if ( v11 < 0 )
      return (unsigned int)v11;
  }
  return result;
}
