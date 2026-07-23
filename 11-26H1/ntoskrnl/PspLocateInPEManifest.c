/*
 * XREFs of PspLocateInPEManifest @ 0x1409E5E24
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1409E53DC (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     LdrResSearchResource @ 0x1409E5F50 (LdrResSearchResource.c)
 */

__int64 __fastcall PspLocateInPEManifest(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // eax
  __int16 v8; // ax
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  _QWORD v11[5]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 688);
  v3 = 0;
  if ( *(_QWORD *)(a1 + 784) )
  {
    v8 = *(_WORD *)(a1 + 1772);
    if ( v8 == 332 || v8 == 452 )
    {
      v9 = *(_QWORD *)(a1 + 680);
      if ( !v9 )
        return 3221225477LL;
      v10 = MiSectionControlArea(v9);
      if ( (*(_DWORD *)(v10 + 56) & 0x20) == 0 )
        return 3221225477LL;
      if ( !*(_QWORD *)(v10 + 144) )
        LODWORD(v2) = v2 | 1;
    }
  }
  v11[0] = 24LL;
  v11[1] = 1LL;
  v11[2] = 0LL;
  v12 = 0LL;
  v5 = LdrResSearchResource(v2, (unsigned int)v11, 3, 48, a2 + 304, (__int64)&v12, 0LL, 0LL);
  if ( v5 < 0 )
  {
    if ( (unsigned int)(v5 + 1073741687) <= 2 )
      return 0LL;
    if ( v5 != -1073741308 )
      return (unsigned int)v5;
    return v3;
  }
  else
  {
    v6 = v12;
    if ( v12 <= 0xFFFFFFFF )
    {
      *(_BYTE *)(a2 + 16) |= 0x20u;
      *(_DWORD *)(a2 + 312) = v6;
      *(_DWORD *)(*(_QWORD *)(a2 + 216) + 8LL) |= 0x2000u;
      return 0LL;
    }
    return 3221225595LL;
  }
}
