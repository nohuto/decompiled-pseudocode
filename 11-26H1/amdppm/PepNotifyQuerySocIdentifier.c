/*
 * XREFs of PepNotifyQuerySocIdentifier @ 0x14003CC80
 * Callers:
 *     InitPep @ 0x14003C830 (InitPep.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

void __fastcall PepNotifyQuerySocIdentifier(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // edx
  __int64 Pool2; // rax
  void *v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // edx
  int v10; // r9d
  int v11; // r8d
  __int64 v12; // rdx
  _WORD *v13; // rax
  unsigned int v14; // ecx
  __int16 v15; // dx
  int v16; // [rsp+28h] [rbp-30h]
  int v17; // [rsp+28h] [rbp-30h]
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF
  __int128 v19; // [rsp+40h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 1120);
  v19 = 0LL;
  v18 = 0LL;
  v3 = PoFxProcessorNotification(v2, 48LL, &v18);
  if ( !v3 )
  {
    Pool2 = ExAllocatePool2(64LL, 2 * (unsigned int)(unsigned __int16)v18 + 2, 1919119952LL);
    v6 = (void *)Pool2;
    if ( !Pool2 )
      return;
    v7 = *(_QWORD *)(a1 + 1120);
    *((_QWORD *)&v18 + 1) = Pool2;
    v8 = PoFxProcessorNotification(v7, 48LL, &v18);
    if ( v8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_18:
        ExFreePoolWithTag(v6, (ULONG)1919119952);
        return;
      }
      v10 = 11;
      v11 = 2;
    }
    else
    {
      v12 = 0x7FFFLL;
      v13 = v6;
      do
      {
        if ( !*v13 )
          break;
        ++v13;
        --v12;
      }
      while ( v12 );
      v14 = v12 == 0 ? 0xC000000D : 0;
      if ( v12 )
      {
        v15 = 2 * v12;
        *((_QWORD *)&v19 + 1) = v6;
        LOWORD(v19) = -2 - v15;
        WORD1(v19) = -v15;
      }
      if ( v14 )
        goto LABEL_18;
      v8 = ((__int64 (__fastcall *)(__int128 *))qword_140015A00)(&v19);
      if ( v8 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_18;
      v10 = 12;
      v11 = 3;
    }
    LOBYTE(v9) = 2;
    v17 = v8;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      v11,
      v10,
      (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids,
      v17);
    goto LABEL_18;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = v3;
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      2,
      10,
      (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids,
      v16);
  }
}
