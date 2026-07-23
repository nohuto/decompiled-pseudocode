/*
 * XREFs of PiDevCfgConvertPropertyFromValue @ 0x1407AC130
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x140A49C64 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgConvertPropertyFromValue(int a1, int a2, wchar_t *a3, unsigned int a4, int *a5, _QWORD *a6)
{
  unsigned int v6; // edi
  int v8; // esi
  _BYTE *Pool2; // rbx
  unsigned int v10; // r9d
  unsigned int v11; // r9d
  unsigned int v12; // r9d
  unsigned int v13; // r9d
  unsigned int v14; // r9d
  unsigned int v15; // r9d
  unsigned int v16; // r9d
  unsigned int v17; // r9d
  int v18; // ecx
  int v19; // ecx
  bool v20; // zf
  GUID *v21; // rax
  bool v22; // zf
  __int64 v23; // rbp
  _QWORD *v24; // rax
  int v25; // ebp
  _WORD *v26; // rax
  int v27; // ebp
  _BYTE *v28; // rax
  unsigned int v29; // r9d
  unsigned int v30; // r9d
  unsigned int v31; // r9d
  unsigned int v32; // r9d
  unsigned int v33; // r9d
  unsigned int v34; // r9d
  unsigned int v35; // r9d
  int v36; // ecx
  int v37; // ebp
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  v8 = 0;
  Pool2 = 0LL;
  if ( a4 > 0x1003 )
  {
    if ( a4 != 8210 )
      goto LABEL_62;
    v22 = a1 == 7;
    goto LABEL_59;
  }
  if ( a4 == 4099 )
  {
LABEL_60:
    v8 = a2;
LABEL_61:
    Pool2 = a3;
    goto LABEL_62;
  }
  if ( a4 > 0x10 )
  {
    v29 = a4 - 17;
    if ( !v29 )
    {
      if ( a1 != 4 )
        goto LABEL_62;
      v37 = *(_DWORD *)a3;
      v8 = 1;
      Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        *Pool2 = -(v37 != 0);
        goto LABEL_62;
      }
      return (unsigned int)-1073741670;
    }
    v30 = v29 - 1;
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( !v31 )
      {
        v20 = a1 == 3;
LABEL_18:
        v8 = a2;
        Pool2 = a3;
        if ( !v20 )
        {
          v8 = 0;
          Pool2 = 0LL;
        }
        goto LABEL_62;
      }
      v32 = v31 - 1;
      if ( v32 )
      {
        v33 = v32 - 2;
        if ( !v33 || (v34 = v33 - 1) == 0 || (v35 = v34 - 1) == 0 )
        {
LABEL_52:
          v20 = a1 == 4;
          goto LABEL_18;
        }
        if ( v35 != 1 )
          goto LABEL_62;
      }
    }
    v36 = a1 - 1;
    if ( v36 )
    {
      v22 = v36 == 1;
LABEL_59:
      if ( !v22 )
        goto LABEL_62;
      goto LABEL_60;
    }
    goto LABEL_60;
  }
  if ( a4 == 16 )
  {
    if ( a1 != 3 && a1 != 11 || a2 != 8 )
      goto LABEL_62;
    v8 = 8;
    goto LABEL_61;
  }
  v10 = a4 - 2;
  if ( !v10 || (v11 = v10 - 1) == 0 )
  {
    if ( a1 != 4 )
      goto LABEL_62;
    v27 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0xFFu )
      goto LABEL_62;
    v8 = 1;
    v28 = (_BYTE *)ExAllocatePool2(0x100uLL);
    Pool2 = v28;
    if ( v28 )
    {
      *v28 = v27;
      goto LABEL_62;
    }
    return (unsigned int)-1073741670;
  }
  v12 = v11 - 1;
  if ( !v12 || (v13 = v12 - 1) == 0 )
  {
    if ( a1 != 4 )
      goto LABEL_62;
    v25 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0xFFFFu )
      goto LABEL_62;
    v8 = 2;
    v26 = (_WORD *)ExAllocatePool2(0x100uLL);
    Pool2 = v26;
    if ( v26 )
    {
      *v26 = v25;
      goto LABEL_62;
    }
    return (unsigned int)-1073741670;
  }
  v14 = v13 - 1;
  if ( !v14 )
    goto LABEL_52;
  v15 = v14 - 1;
  if ( !v15 )
    goto LABEL_52;
  v16 = v15 - 1;
  if ( !v16 || (v17 = v16 - 1) == 0 )
  {
    if ( a1 == 4 )
    {
      v23 = *(unsigned int *)a3;
      v8 = 8;
      v24 = (_QWORD *)ExAllocatePool2(0x100uLL);
      Pool2 = v24;
      if ( v24 )
      {
        *v24 = v23;
        goto LABEL_62;
      }
      return (unsigned int)-1073741670;
    }
    v22 = a1 == 11;
    goto LABEL_59;
  }
  if ( v17 != 4 )
    goto LABEL_62;
  v18 = a1 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      if ( v19 == 1 )
      {
        v20 = a2 == 16;
        goto LABEL_18;
      }
LABEL_62:
      *a5 = v8;
      *a6 = Pool2;
      return v6;
    }
  }
  if ( a2 != 78 )
    goto LABEL_62;
  v8 = 16;
  v21 = (GUID *)ExAllocatePool2(0x100uLL);
  Pool2 = v21;
  if ( v21 )
  {
    GuidString.Buffer = a3;
    *(_DWORD *)&GuidString.Length = 5111884;
    if ( RtlGUIDFromString(&GuidString, v21) < 0 )
    {
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = 0LL;
    }
    goto LABEL_62;
  }
  return (unsigned int)-1073741670;
}
