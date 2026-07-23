/*
 * XREFs of RtlSidHashInitialize @ 0x140406710
 * Callers:
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     SepSetTokenCapabilities @ 0x1409E2C54 (SepSetTokenCapabilities.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 *     SepCopyTokenAccessInformation @ 0x140A4E3E8 (SepCopyTokenAccessInformation.c)
 *     CmpBuildAdminInformation @ 0x140A4E958 (CmpBuildAdminInformation.c)
 *     SepCreateClaimAttributes @ 0x140AF2AAC (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140AFDB28 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __cdecl RtlSidHashInitialize(
        PSID_AND_ATTRIBUTES SidAttr,
        ULONG SidCount,
        PSID_AND_ATTRIBUTES_HASH SidAttrHash)
{
  ULONG v7; // ecx
  __int64 v8; // rax
  __int64 v9; // r9
  _BYTE *Sid; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rcx

  if ( !SidAttrHash )
    return -1073741811;
  memset_0(SidAttrHash, 0, sizeof(_SID_AND_ATTRIBUTES_HASH));
  if ( SidAttr && SidCount )
  {
    v7 = 64;
    SidAttrHash->SidAttr = SidAttr;
    SidAttrHash->SidCount = SidCount;
    if ( SidCount <= 0x40 )
      v7 = SidCount;
    v8 = 1LL;
    v9 = v7;
    do
    {
      Sid = SidAttr->Sid;
      ++SidAttr;
      v11 = (unsigned __int8)Sid[4 * (unsigned __int8)Sid[1] + 4];
      v12 = Sid[4 * (unsigned __int8)Sid[1] + 4] & 0xF;
      SidAttrHash->Hash[v12] |= v8;
      SidAttrHash->Hash[((unsigned __int64)v11 >> 4) + 16] |= v8;
      v8 = __ROL8__(v8, 1);
      --v9;
    }
    while ( v9 );
  }
  return 0;
}
