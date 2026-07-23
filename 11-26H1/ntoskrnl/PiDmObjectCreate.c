/*
 * XREFs of PiDmObjectCreate @ 0x1409AB728
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x1407AA358 (PiDmObjectManagerPopulate.c)
 *     PiDmAddCacheReferenceForObject @ 0x1409A9E30 (PiDmAddCacheReferenceForObject.c)
 * Callees:
 *     PnpAllocatePWSTR @ 0x140951520 (PnpAllocatePWSTR.c)
 *     PiDmGetCachedKeyIndex @ 0x140951FF0 (PiDmGetCachedKeyIndex.c)
 *     _PnpValidateObjectName @ 0x140952EDC (_PnpValidateObjectName.c)
 *     _CmValidateDeviceInterfaceName @ 0x140960DB0 (_CmValidateDeviceInterfaceName.c)
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 *     RtlHashUnicodeString @ 0x140A43AE0 (RtlHashUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDmObjectCreate(unsigned int a1, _WORD *a2, __int64 *a3)
{
  DEVPROPKEY **v6; // r12
  unsigned int v7; // esi
  __int64 Pool2; // rax
  __int64 v9; // rdi
  const WCHAR **v10; // r15
  __int64 v11; // rcx
  signed int PWSTR; // ebx
  WCHAR *v13; // r14
  const WCHAR *v14; // rdx
  const WCHAR *v15; // rdx
  wchar_t *v16; // rdx
  __int64 v17; // rcx
  wchar_t *v18; // rax
  wchar_t *v20; // rax
  _QWORD *v21; // rax
  _DWORD *v22; // rax
  __int64 v23; // rcx
  unsigned int i; // r9d
  __int64 v25; // r8
  unsigned int CachedKeyIndex; // eax
  __int64 v27; // rcx
  UNICODE_STRING String; // [rsp+20h] [rbp-48h] BYREF

  *a3 = 0LL;
  switch ( a1 )
  {
    case 1u:
      v6 = &PiDmCachedDeviceKeys;
      v7 = 10;
      break;
    case 3u:
      v6 = &PiDmCachedDeviceInterfaceKeys;
      v7 = 1;
      break;
    case 5u:
      v6 = &PiDmCachedDeviceContainerKeys;
      v7 = 3;
      break;
    default:
      v6 = 0LL;
      v7 = 0;
      break;
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v9 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v10 = (const WCHAR **)(Pool2 + 16);
  *(_QWORD *)Pool2 = 0LL;
  *(_DWORD *)(Pool2 + 8) = 1;
  *(_DWORD *)(Pool2 + 28) = a1;
  PWSTR = PnpAllocatePWSTR(a2, 0x7FFFFFFFuLL, 0x5A706E50u, (PVOID *)(Pool2 + 16));
  if ( PWSTR < 0 )
    goto LABEL_14;
  v13 = (WCHAR *)*v10;
  v14 = *v10;
  if ( a1 == 3 )
  {
    PWSTR = CmValidateDeviceInterfaceName(v11, v14);
    if ( PWSTR < 0 )
    {
LABEL_14:
      PiDmObjectRelease((unsigned int *)v9);
      return (unsigned int)PWSTR;
    }
    *(_QWORD *)v13 = *(_QWORD *)L"\\\\?\\";
    v15 = *v10;
    PWSTR = 0;
    String = 0LL;
    v16 = (wchar_t *)(v15 + 4);
    if ( v16 )
    {
      v17 = 0x7FFFLL;
      v18 = v16;
      do
      {
        if ( !*v18 )
          break;
        ++v18;
        --v17;
      }
      while ( v17 );
      goto LABEL_11;
    }
  }
  else
  {
    PWSTR = PnpValidateObjectName(v11, (__int64)v14, a1);
    if ( PWSTR < 0 )
      goto LABEL_14;
    v16 = (wchar_t *)*v10;
    PWSTR = 0;
    String = 0LL;
    if ( v16 )
    {
      v17 = 0x7FFFLL;
      v20 = v16;
      do
      {
        if ( !*v20 )
          break;
        ++v20;
        --v17;
      }
      while ( v17 );
LABEL_11:
      PWSTR = v17 == 0 ? 0xC000000D : 0;
      if ( v17 )
      {
        String.Buffer = v16;
        String.Length = -2 - 2 * v17;
        String.MaximumLength = -2 * v17;
      }
    }
  }
  if ( PWSTR < 0 )
    goto LABEL_14;
  PWSTR = RtlHashUnicodeString(&String, 1u, 0, (PULONG)(v9 + 24));
  switch ( a1 )
  {
    case 1u:
      v21 = (_QWORD *)(v9 + 88);
      goto LABEL_34;
    case 2u:
    case 4u:
      goto LABEL_33;
    case 5u:
      *(_QWORD *)(v9 + 48) = v9 + 40;
      *(_QWORD *)(v9 + 40) = v9 + 40;
      v21 = (_QWORD *)(v9 + 64);
      goto LABEL_34;
    case 6u:
LABEL_33:
      v21 = (_QWORD *)(v9 + 40);
LABEL_34:
      *v21 = v21;
      v21[1] = v21;
      break;
  }
  if ( v7 )
  {
    v22 = (_DWORD *)(v9 + 112);
    v23 = v7;
    do
    {
      *v22 = 1;
      v22 += 6;
      --v23;
    }
    while ( v23 );
  }
  for ( i = 0; i < 3; ++i )
  {
    v25 = 7LL * i;
    if ( a1 == LODWORD(PiDmAggregatedBooleanDefs[v25]) )
    {
      CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v6, v7, PiDmAggregatedBooleanDefs[v25 + 1]);
      if ( CachedKeyIndex >= v7 )
      {
        PWSTR = -1073741595;
        goto LABEL_14;
      }
      PWSTR = 0;
      v27 = 3LL * CachedKeyIndex;
      *(_BYTE *)(v9 + 8 * v27 + 128) = 0;
      *(_DWORD *)(v9 + 8 * v27 + 124) = 1;
      *(_DWORD *)(v9 + 8 * v27 + 120) = 17;
      *(_DWORD *)(v9 + 8 * v27 + 112) = 3;
    }
  }
  if ( PWSTR < 0 )
    goto LABEL_14;
  *a3 = v9;
  return (unsigned int)PWSTR;
}
