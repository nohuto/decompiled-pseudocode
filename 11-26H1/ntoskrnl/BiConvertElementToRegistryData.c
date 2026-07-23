/*
 * XREFs of BiConvertElementToRegistryData @ 0x1409A3524
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x1409A40A4 (BcdSetElementDataWithFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x14077BD14 (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     BiStringFromGUID @ 0x1409A48E8 (BiStringFromGUID.c)
 *     RtlStringFromGUIDEx @ 0x1409FA570 (RtlStringFromGUIDEx.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140B5E48C (BiConvertNtDeviceToBootEnvironment.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiConvertElementToRegistryData(
        unsigned int a1,
        GUID *a2,
        unsigned int a3,
        __int64 a4,
        wchar_t **a5,
        unsigned int *a6)
{
  GUID *v6; // r15
  size_t v7; // rbx
  int v8; // ecx
  int v9; // eax
  NTSTATUS v10; // ebx
  unsigned int *v11; // rbx
  unsigned int v12; // esi
  wchar_t *v13; // rax
  wchar_t *Buffer; // rdi
  int v16; // ecx
  char v17; // r14
  GUID *v18; // rcx
  unsigned int i; // eax
  int v20; // ecx
  int v21; // ecx
  unsigned int v22; // ebx
  int v23; // esi
  __int64 v24; // r13
  __int64 v25; // rax
  _WORD *v26; // r12
  size_t v27; // rbx
  int v28; // ecx
  int v29; // ecx
  wchar_t *v30; // rax
  wchar_t *Pool2; // rax
  void *Src; // [rsp+20h] [rbp-89h] BYREF
  __int64 v33; // [rsp+28h] [rbp-81h] BYREF
  void *v34; // [rsp+30h] [rbp-79h]
  wchar_t **v35; // [rsp+38h] [rbp-71h]
  unsigned int *v36; // [rsp+40h] [rbp-69h]
  UNICODE_STRING GuidString; // [rsp+48h] [rbp-61h] BYREF
  char v38; // [rsp+60h] [rbp-49h] BYREF

  v35 = a5;
  v6 = a2;
  v36 = a6;
  v7 = a3;
  v33 = 5111808LL;
  v34 = &v38;
  Src = 0LL;
  GuidString = 0LL;
  v8 = (HIBYTE(a1) & 0xF) - 1;
  if ( v8 )
  {
    v16 = v8 - 1;
    if ( !v16 )
    {
      v17 = 1;
      if ( (a3 & 1) == 0 )
      {
        v18 = a2;
        for ( i = a3 >> 1; i; --i )
        {
          if ( !LOWORD(v18->Data1) )
          {
            v12 = a3;
            goto LABEL_51;
          }
          v18 = (GUID *)((char *)v18 + 2);
        }
        v12 = a3 + 2;
        if ( a3 + 2 < a3 )
          return (unsigned int)-1073741675;
        v17 = 0;
LABEL_51:
        Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL);
        Buffer = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, v6, v7);
          if ( !v17 )
            *(wchar_t *)((char *)Buffer + v12 - 2) = 0;
          goto LABEL_9;
        }
        goto LABEL_36;
      }
      return (unsigned int)-1073741788;
    }
    v20 = v16 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( !v21 )
      {
        if ( (a3 & 0xF) != 0 )
          return (unsigned int)-1073741788;
        v22 = a3 >> 4;
        v23 = 0;
        if ( a3 >> 4 )
          v23 = 78 * v22;
        v12 = v23 + 2;
        v24 = v22;
        v25 = ExAllocatePool2(0x102uLL);
        Buffer = (wchar_t *)v25;
        if ( v25 )
        {
          v26 = (_WORD *)v25;
          if ( v22 )
          {
            do
            {
              BiStringFromGUID(v6, &v33);
              v27 = (unsigned int)(unsigned __int16)v33 + 2;
              memmove(v26, v34, v27);
              v26 = (_WORD *)((char *)v26 + v27);
              ++v6;
              --v24;
            }
            while ( v24 );
          }
          *v26 = 0;
          goto LABEL_9;
        }
LABEL_36:
        v10 = -1073741801;
        goto LABEL_10;
      }
      v28 = v21 - 1;
      if ( v28 )
      {
        v29 = v28 - 1;
        if ( v29 )
        {
          if ( v29 == 1 && (a3 & 7) != 0 )
            return (unsigned int)-1073741788;
          v12 = a3;
          v30 = (wchar_t *)ExAllocatePool2(0x102uLL);
          Buffer = v30;
          if ( !v30 )
            goto LABEL_36;
          memmove(v30, v6, v7);
        }
        else
        {
          if ( a3 - 1 > 1 )
            return (unsigned int)-1073741788;
          v12 = 1;
          Buffer = (wchar_t *)ExAllocatePool2(0x102uLL);
          if ( !Buffer )
            goto LABEL_36;
          *(_BYTE *)Buffer = LOBYTE(v6->Data1) != 0;
        }
      }
      else
      {
        v12 = 8;
        if ( a3 != 8 )
          return (unsigned int)-1073741788;
        Buffer = (wchar_t *)ExAllocatePool2(0x102uLL);
        if ( !Buffer )
          goto LABEL_36;
        *(_QWORD *)Buffer = *(_QWORD *)&v6->Data1;
      }
    }
    else
    {
      if ( a3 != 16 )
        return (unsigned int)-1073741788;
      v10 = RtlStringFromGUIDEx(a2, &GuidString, 1u);
      if ( v10 < 0 )
        goto LABEL_10;
      Buffer = GuidString.Buffer;
      v12 = GuidString.Length + 2;
    }
LABEL_9:
    v10 = 0;
    *v35 = Buffer;
    *v36 = v12;
    goto LABEL_10;
  }
  if ( a2->Data1 == 6 )
    v9 = BiConvertQualifiedPartitionToBootEnvironment((__int64)a2, a3, &Src);
  else
    v9 = BiConvertNtDeviceToBootEnvironment(a2, a3, 0LL, &Src);
  v10 = v9;
  if ( v9 < 0 )
    goto LABEL_10;
  v11 = (unsigned int *)Src;
  v12 = *((_DWORD *)Src + 2) + 16;
  if ( *((_DWORD *)Src + 2) < 0xFFFFFFF0 )
  {
    v13 = (wchar_t *)ExAllocatePool2(0x102uLL);
    Buffer = v13;
    if ( v13 )
    {
      *(GUID *)v13 = *(GUID *)&v6->Data2;
      memmove(v13 + 8, v11, v11[2]);
      if ( Src )
      {
        ExFreePoolWithTag(Src, 0x4B444342u);
        Src = 0LL;
      }
      goto LABEL_9;
    }
    goto LABEL_36;
  }
  v10 = -1073741811;
LABEL_10:
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
  return (unsigned int)v10;
}
