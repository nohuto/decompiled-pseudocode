/*
 * XREFs of PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1409522D0
 * Callers:
 *     PiDqActionDataCreate @ 0x14095124C (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PiDqOpenUserObjectRegKey @ 0x140952B4C (PiDqOpenUserObjectRegKey.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x14095D088 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     _PnpOpenObjectRegKey @ 0x14095EB70 (_PnpOpenObjectRegKey.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x140AB53D8 (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqGrowPropertyArray @ 0x140AB5D94 (PiDqGrowPropertyArray.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqActionDataGetAllPropertiesInBestLanguage(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        _DWORD *a7,
        unsigned int *a8)
{
  int v8; // r13d
  void *v10; // rdi
  unsigned int v11; // r15d
  int v12; // eax
  int v13; // r9d
  int v14; // ebx
  _DWORD *v15; // r14
  unsigned int v16; // eax
  unsigned int v17; // r8d
  unsigned int v18; // esi
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  void *v21; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+38h] BYREF

  v8 = a4;
  v21 = 0LL;
  v22 = 0;
  v10 = 0LL;
  Handle = 0LL;
  if ( a2 == 1 )
  {
    v11 = 0;
    v12 = PiDqOpenUserObjectRegKey(a4, a3, 1LL, 0LL, a1, &Handle);
  }
  else
  {
    v11 = a3;
    if ( a2 )
    {
      v14 = -1073741811;
      goto LABEL_11;
    }
    v12 = PnpOpenObjectRegKey(PiPnpRtlCtx, a4, a3, 1, 0, (__int64)&Handle);
  }
  v14 = v12;
  if ( v12 < 0 )
    goto LABEL_11;
  v14 = PiDqPnPGetObjectPropertyKeys(v8, v11, (_DWORD)Handle, v13, (__int64)&v21, (__int64)&v22);
  if ( v14 < 0 )
    goto LABEL_16;
  v15 = a7;
  v16 = v22;
  v17 = *a7 + v22;
  if ( *a8 >= v17 )
    goto LABEL_8;
  *a8 = v17;
  v14 = PiDqGrowPropertyArray(a6);
  if ( v14 < 0 )
  {
LABEL_16:
    v10 = v21;
    goto LABEL_11;
  }
  v16 = v22;
LABEL_8:
  v10 = v21;
  v18 = 0;
  if ( v16 )
  {
    do
    {
      v14 = PiDqPnPGetObjectPropertyInBestLocale(
              v8,
              v11,
              (_DWORD)Handle,
              (unsigned int)v10 + 20 * v18,
              a2,
              a5,
              *a6 + 48LL * (unsigned int)*v15);
      if ( v14 < 0 )
        break;
      ++*v15;
      ++v18;
    }
    while ( v18 < v22 );
  }
LABEL_11:
  if ( Handle )
    ZwClose(Handle);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x58706E50u);
  return (unsigned int)v14;
}
