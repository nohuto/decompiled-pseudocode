/*
 * XREFs of ValidateCoordinatedState @ 0x140030A84
 * Callers:
 *     PepNotifyQueryCoordinatedStates @ 0x1400382BC (PepNotifyQueryCoordinatedStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     memset @ 0x14000EA40 (memset.c)
 */

__int64 __fastcall ValidateCoordinatedState(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  unsigned int v5; // edx
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  char v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // r10
  _BYTE *v12; // rcx
  bool v13; // zf
  _BYTE v15[272]; // [rsp+30h] [rbp-138h] BYREF

  v2 = a2;
  memset(v15, 0, 0x108uLL);
  v4 = a1 + 320 * v2;
  KeInitializeAffinityEx2(v15, 32LL);
  KeCopyAffinityEx2(v15, &unk_140015A18);
  v6 = *(_DWORD *)(v4 + 348);
  v7 = 0;
  v8 = 0;
  if ( !v6 )
    goto LABEL_12;
  v9 = v6;
  v10 = (_QWORD *)(*(_QWORD *)(v4 + 360) + 8LL);
  do
  {
    v5 = *((_DWORD *)v10 - 1);
    if ( v5 )
    {
      v11 = v5;
      v12 = (_BYTE *)(*v10 + 2LL);
      do
      {
        v13 = *v12 == 0;
        v12 += 4;
        if ( !v13 )
          v8 = 1;
        --v11;
      }
      while ( v11 );
    }
    v10 += 2;
    --v9;
  }
  while ( v9 );
  if ( v8 )
  {
    if ( (unsigned int)KeIsEqualAffinityEx(v4 + 48, &unk_140015A18) )
      *(_BYTE *)(v4 + 352) = 1;
  }
  else
  {
LABEL_12:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        1,
        104,
        (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
        v2);
    }
    return (unsigned int)-1073741811;
  }
  return v7;
}
