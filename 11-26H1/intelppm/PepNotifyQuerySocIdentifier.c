/*
 * XREFs of PepNotifyQuerySocIdentifier @ 0x14003D890
 * Callers:
 *     InitPep @ 0x14003D440 (InitPep.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

void __fastcall PepNotifyQuerySocIdentifier(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 Pool2; // rax
  void *v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  unsigned __int16 v8; // r9
  unsigned int v9; // r8d
  __int64 v10; // rdx
  _WORD *v11; // rax
  unsigned int v12; // ecx
  __int16 v13; // dx
  int v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+28h] [rbp-30h]
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  __int128 v17; // [rsp+40h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 1120);
  v17 = 0LL;
  v16 = 0LL;
  v3 = PoFxProcessorNotification(v2, 48LL, &v16);
  if ( !v3 )
  {
    Pool2 = ExAllocatePool2(64LL, 2 * (unsigned int)(unsigned __int16)v16 + 2, 1919119952LL);
    v5 = (void *)Pool2;
    if ( !Pool2 )
      return;
    v6 = *(_QWORD *)(a1 + 1120);
    *((_QWORD *)&v16 + 1) = Pool2;
    v7 = PoFxProcessorNotification(v6, 48LL, &v16);
    if ( v7 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_18:
        ExFreePoolWithTag(v5, (ULONG)1919119952);
        return;
      }
      v8 = 11;
      v9 = 2;
    }
    else
    {
      v10 = 0x7FFFLL;
      v11 = v5;
      do
      {
        if ( !*v11 )
          break;
        ++v11;
        --v10;
      }
      while ( v10 );
      v12 = v10 == 0 ? 0xC000000D : 0;
      if ( v10 )
      {
        v13 = 2 * v10;
        *((_QWORD *)&v17 + 1) = v5;
        LOWORD(v17) = -2 - v13;
        WORD1(v17) = -v13;
      }
      if ( v12 )
        goto LABEL_18;
      v7 = ((__int64 (__fastcall *)(__int128 *))qword_1400195D0)(&v17);
      if ( v7 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_18;
      v8 = 12;
      v9 = 3;
    }
    v15 = v7;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v9,
      v8,
      (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids,
      v15);
    goto LABEL_18;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = v3;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0xAu,
      (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids,
      v14);
  }
}
