/*
 * XREFs of ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18006C0B4
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180011730 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180038EE0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 * Callees:
 *     RmpResourceSetPropertyOverridesAreSupported @ 0x18005BB14 (RmpResourceSetPropertyOverridesAreSupported.c)
 *     ?HampUtilCheckStartAndRevokeFlags@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18006C254 (-HampUtilCheckStartAndRevokeFlags@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 */

__int64 __fastcall HampUtilAreActivityPropertiesValid(
        struct _RM_PSM_HOST_INFO *a1,
        struct _HAM_ACTIVITY_PROPERTIES *a2)
{
  bool v2; // zf
  unsigned int v3; // eax
  unsigned int v5; // edx
  int v7; // edx
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  int v10; // r8d
  unsigned int v11; // r8d
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((_DWORD *)a1 + 134) == 2;
  v3 = *(_DWORD *)a2;
  BitMapHeader = 0LL;
  if ( v2 )
  {
    v5 = v3 >> 23;
  }
  else
  {
    if ( (v3 & 0x400) != 0 )
      return 0LL;
    v5 = v3 >> 23;
    if ( ((v3 >> 23) & 3) > 1 )
      return 0LL;
  }
  if ( (v5 & 3) != 0 && (v3 & 0x2000) == 0 )
    return 0LL;
  v7 = *((_DWORD *)a2 + 1);
  v8 = 0;
  v9 = *((_DWORD *)a2 + 2);
  v10 = *((_DWORD *)a2 + 68);
  if ( *((_DWORD *)a2 + 67) == 5 )
  {
    if ( !v10 )
    {
      v11 = v9 >> 2;
      goto LABEL_15;
    }
    return 0LL;
  }
  if ( (unsigned int)(v10 - 10) > 0x122 )
    return 0LL;
  if ( (v7 & 4) != 0 )
    return 0LL;
  v11 = v9 >> 2;
  if ( (v9 & 0xC) != 0 )
    return 0LL;
LABEL_15:
  if ( (v9 & 0x200) != 0
    || (v7 & 0x400) != 0
    || (v9 & 0x20) != 0
    || (v7 & 0x10) != 0
    || ((v11 & 1) != 0 || (v9 & 8) != 0) && (v3 & 0x2000000) != 0 )
  {
    return 0LL;
  }
  if ( (v3 & 0x7F) > 0x40 || (v3 & 0x180) >= 0x180 || (v3 & 0x2400) == 0x400 || (v3 & 0x180) != 0 && (v7 & 0x200) != 0 )
    return 0LL;
  if ( (v3 & 0x1400) == 0x1400 )
    return 0LL;
  if ( (v3 & 0xC00) == 0xC00 )
    return 0LL;
  if ( (v3 & 0x100400) == 0x100000 )
    return 0LL;
  if ( !HampUtilCheckStartAndRevokeFlags(a2) )
    return 0LL;
  RtlInitializeBitMap(&BitMapHeader, (PULONG)a2 + 96, 0x2Fu);
  if ( RtlNumberOfSetBits(&BitMapHeader) )
    return 0LL;
  LOBYTE(v8) = (unsigned int)RmpResourceSetPropertyOverridesAreSupported((__int64)a2 + 280) != 0;
  return v8;
}
