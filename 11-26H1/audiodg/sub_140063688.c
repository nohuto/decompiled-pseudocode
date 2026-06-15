/*
 * XREFs of sub_140063688 @ 0x140063688
 * Callers:
 *     sub_14006425C @ 0x14006425C (sub_14006425C.c)
 * Callees:
 *     sub_140049A50 @ 0x140049A50 (sub_140049A50.c)
 *     sub_140064214 @ 0x140064214 (sub_140064214.c)
 */

const char *__fastcall sub_140063688(__int64 *a1)
{
  __int64 v1; // rbp
  int v2; // eax
  const char *v3; // rax
  __int64 v5; // rbp

  v1 = *a1;
  v2 = *(_DWORD *)(*a1 + 40);
  switch ( v2 )
  {
    case 3:
      v3 = (const char *)sub_140064214(*(unsigned int *)(v1 + 60));
      sub_140049A50((__int64)&unk_1400E85C0, 78LL, (__int64)"PID: %d (%s)", *(_DWORD *)(v1 + 56), v3);
      return (const char *)&unk_1400E85C0;
    case 1:
      return "Device";
    case 5:
      sub_140049A50((__int64)&unk_1400E85C0, 78LL, (__int64)"Bridge Source #%I64d", *(_QWORD *)(v1 + 64));
      return (const char *)&unk_1400E85C0;
    case 6:
      sub_140049A50((__int64)&unk_1400E85C0, 78LL, (__int64)"Streaming from bridge source #%I64d", *(_QWORD *)(v1 + 64));
      return (const char *)&unk_1400E85C0;
  }
  v5 = *(_QWORD *)(v1 + 32);
  if ( *(_QWORD *)(v5 + 8) == 0x4B25DD4BD69E0717LL && *(_QWORD *)(v5 + 16) == 0xACB8333881DA7A99uLL )
    return "Limiter";
  if ( *(_QWORD *)(v5 + 8) == 0x4BA07D833DC09436LL && *(_QWORD *)(v5 + 16) == 0xBAC596F947CDDCADuLL )
    return "Meter";
  if ( *(_QWORD *)(v5 + 8) == 0x403AF04306587E71LL && *(_QWORD *)(v5 + 16) == 0x3E1A61B59CB49BFLL )
    return "Volume";
  if ( *(_QWORD *)(v5 + 8) == 0x4829289527C98999LL && *(_QWORD *)(v5 + 16) == 0xB03DBD658B5A80B0uLL )
    return "SRC";
  if ( *(_QWORD *)(v5 + 8) == 0x4B78E87FC58BD103LL && *(_QWORD *)(v5 + 16) == 0xE20E97955C7AFAA0uLL )
    return "SRC-old";
  if ( *(_QWORD *)(v5 + 8) == 0x4B79BB6B07252659LL && *(_QWORD *)(v5 + 16) == 0x79A599663F628BB7LL )
    return "Constrictor";
  if ( *(_QWORD *)(v5 + 8) == 0x4FCE532B12DD4DBBLL && *(_QWORD *)(v5 + 16) == 0x5AFEC8B9CD745386LL )
    return "Mixer";
  if ( *(_QWORD *)(v5 + 8) == 0x411E0E02541987EELL && *(_QWORD *)(v5 + 16) == 0x4B7F6E15C61F859ALL )
    return "Matrix";
  if ( *(_QWORD *)(v5 + 8) == 0x4AFC22BDE916B6B2LL && *(_QWORD *)(v5 + 16) == 0xE6727FBD9D337B3LL )
    return "Copy";
  if ( *(_QWORD *)(v5 + 8) == 0x4B9A2F190F92FF8DLL && *(_QWORD *)(v5 + 16) == 0xECEC3B2BFC3EDDB9uLL )
    return "Cleanup";
  if ( *(_QWORD *)(v5 + 8) == 0x40131EB1693BADEALL && *(_QWORD *)(v5 + 16) == 0xBD554A625F2899B7uLL )
    return "SilenceMonitor";
  if ( *(_QWORD *)(v5 + 8) == 0x46AF53170FA53099LL && *(_QWORD *)(v5 + 16) == 0xF950B5A4049A7693uLL )
    return "Accessibility";
  if ( *(_QWORD *)(v5 + 8) == 0x472EA7163FD7F233LL && *(_QWORD *)(v5 + 16) == 0x964EF35459C22F8FuLL )
    return "Format Converter";
  if ( *(_QWORD *)(v5 + 8) == 0x45E987C9FED4ACC3LL && *(_QWORD *)(v5 + 16) == 0x87E655A8595B26A0uLL )
    return "SASP";
  if ( *(_QWORD *)(v5 + 8) == 0x4BA3DEC25BBC2C71LL && *(_QWORD *)(v5 + 16) == 0xA5C81C7DF3361A96uLL )
    return "ASAR";
  if ( *(_QWORD *)(v5 + 8) == 0x41A6623F73FB9979LL && *(_QWORD *)(v5 + 16) == 0x4F9C517C81BA1CBFLL )
    return "AEC";
  if ( *(_QWORD *)(v5 + 8) == 0x439399FAF82EFF51LL && *(_QWORD *)(v5 + 16) == 0xC372399F5D6D1DA3uLL )
    return "AGC";
  if ( *(_QWORD *)(v5 + 8) == 0x4DED64527ECEAD6DLL && *(_QWORD *)(v5 + 16) == 0x69767D94B97B67B5LL )
    return "NS";
  if ( *(_QWORD *)(v5 + 8) == 0x464CAE2462DC1A93LL && *(_QWORD *)(v5 + 16) == 0x50424C822F453EA4LL )
    return "Wmalfx";
  if ( *(_QWORD *)(v5 + 8) == 0x4C0AEEE3637C490DLL && *(_QWORD *)(v5 + 16) == 0xA22D805819373F97uLL )
    return "Wmagfx";
  if ( *(_QWORD *)(v5 + 8) == 0x4F23C73B4BE8A061LL && *(_QWORD *)(v5 + 16) == 0x98863EAE7A311481uLL )
    return "VSS";
  if ( *(_QWORD *)(v5 + 8) == 0x44638C5CC9453E73LL && *(_QWORD *)(v5 + 16) == 0x47542FAB8BAF8499LL )
    return "Wmacapxlfx";
  if ( *(_QWORD *)(v5 + 8) == 0x4903137E13AB3EBDLL && *(_QWORD *)(v5 + 16) == 0x17FD7782BE60899DLL )
    return "Wmacapxgfx";
  if ( *(_DWORD *)(v5 + 4) )
  {
    sub_140049A50(
      (__int64)&unk_1400E85C0,
      78LL,
      (__int64)"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
      *(_DWORD *)(v5 + 8),
      *(unsigned __int16 *)(v5 + 12),
      *(unsigned __int16 *)(v5 + 14),
      *(unsigned __int8 *)(v5 + 16),
      *(unsigned __int8 *)(v5 + 17),
      *(unsigned __int8 *)(v5 + 18),
      *(unsigned __int8 *)(v5 + 19),
      *(unsigned __int8 *)(v5 + 20),
      *(unsigned __int8 *)(v5 + 21),
      *(unsigned __int8 *)(v5 + 22),
      *(unsigned __int8 *)(v5 + 23));
    return (const char *)&unk_1400E85C0;
  }
  return "Unknown";
}
