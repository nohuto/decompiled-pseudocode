/*
 * XREFs of KiVerifyContextIpForUserCet @ 0x1403DA4D0
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1403D8A40 (KiContinuePreviousModeUser.c)
 *     KeVerifyContextIpForUserCet @ 0x1403DA270 (KeVerifyContextIpForUserCet.c)
 *     KeVerifyContextRecord @ 0x1403DA340 (KeVerifyContextRecord.c)
 * Callees:
 *     RtlGetImageBaseAndLoadConfig @ 0x14042E700 (RtlGetImageBaseAndLoadConfig.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     RtlVerifyUserUnwindTarget @ 0x140A94E18 (RtlVerifyUserUnwindTarget.c)
 */

__int64 __fastcall KiVerifyContextIpForUserCet(__int64 a1, __int64 a2, unsigned int *a3, char a4, unsigned __int64 *a5)
{
  __int64 v8; // r14
  __int64 result; // rax
  __int64 i; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned int v13; // r8d
  int ImageBaseAndLoadConfig; // eax
  char v15; // cl
  _DWORD *v16; // rsi
  volatile void *Address[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h]

  v8 = *(_QWORD *)(a2 + 248);
  if ( (unsigned __int64)(v8 - 0x10000) > 0x7FFFFFFDFFFFLL )
    return 3221227018LL;
  for ( i = *(_QWORD *)(a1 + 40); (*(_BYTE *)(i + 8) & 1) != 0; i = *(_QWORD *)(i + 40) )
    ;
  v11 = 400LL;
  if ( KiFredEnabled )
    v11 = 416LL;
  if ( v8 == *(_QWORD *)(i - v11 + 360) )
    return 0LL;
  v12 = *a5;
  v13 = *a3;
  if ( v13 > 1 )
  {
    if ( v13 == 2 )
      return RtlVerifyUserUnwindTarget(v8, 2LL, 0LL);
    if ( v13 != 3 )
      return 3221225485LL;
  }
  if ( !v12 )
  {
    v12 = __readmsr(0x6A7u);
    if ( KiUserCetPl3SspCanonicalizeMask )
      v12 &= KiUserCetPl3SspCanonicalizeMask;
    if ( !v12 )
      return 0LL;
  }
  if ( !v13 && v8 == stru_140FC11F0.TracingPrivate[0] )
    *a3 = 1;
  *(_OWORD *)Address = 0LL;
  v18 = 0LL;
  if ( !*a3 )
  {
    result = RtlVerifyUserUnwindTarget(v8, 0LL, Address);
    if ( (int)result >= 0 )
      return result;
  }
  if ( a4 && *a3 != 1 )
  {
    if ( (_BYTE)v18 )
      goto LABEL_40;
    ImageBaseAndLoadConfig = RtlGetImageBaseAndLoadConfig(v8, Address, &Address[1]);
    v15 = v18;
    if ( ImageBaseAndLoadConfig >= 0 )
      v15 = 1;
    if ( v15 )
    {
LABEL_40:
      if ( Address[0] )
      {
        v16 = Address[1];
        ProbeForRead(Address[1], 0x118uLL, 1u);
        if ( v16 && *v16 >= 0x118u && (v16[36] & 0x400000) != 0 )
          goto LABEL_18;
        return 0LL;
      }
      return 0LL;
    }
  }
  do
  {
LABEL_18:
    if ( RtlReadULong64FromUser(v12) == v8 )
    {
      *a5 = v12 + 8;
      return 0LL;
    }
    v12 += 8LL;
  }
  while ( (v12 & 0xFFF) != 0 || (*(_DWORD *)(a1 + 1440) & 1) == 0 );
  return 3221225547LL;
}
