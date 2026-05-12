/*
 * XREFs of StorPortPause @ 0x1400745D0
 * Callers:
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 *     sub_1401B76E0 @ 0x1401B76E0 (sub_1401B76E0.c)
 * Callees:
 *     sub_1400099A0 @ 0x1400099A0 (sub_1400099A0.c)
 *     sub_14000D2F0 @ 0x14000D2F0 (sub_14000D2F0.c)
 *     sub_14000F5E0 @ 0x14000F5E0 (sub_14000F5E0.c)
 *     sub_14000FB90 @ 0x14000FB90 (sub_14000FB90.c)
 *     sub_1400273F0 @ 0x1400273F0 (sub_1400273F0.c)
 *     sub_1400541AC @ 0x1400541AC (sub_1400541AC.c)
 */

char __fastcall StorPortPause(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // r8
  int *v5; // rdi
  int *v6; // rsi
  int *v7; // r9
  int *v8; // rcx
  __int64 v9; // rcx
  int *v11; // rdi
  char *v12; // rcx
  int *v13; // rdi
  __int64 v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+28h] [rbp-40h]
  int *v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  int *v18; // [rsp+88h] [rbp+20h] BYREF

  v18 = 0LL;
  v16 = 0LL;
  v3 = a2;
  sub_1400273F0(a1, &v18, &v16);
  v5 = v18;
  v6 = v16;
  if ( (qword_140168458 & 0x200) != 0 )
  {
    v7 = v16;
    v8 = v16;
    if ( v18 )
    {
      v7 = v18;
      v8 = v18;
    }
    sub_14000FB90((__int64)v8, 14, retaddr, (__int64)v7, v3, 0LL, 0LL);
  }
  if ( v5 )
  {
    v9 = (unsigned int)v5[14];
  }
  else if ( v6 )
  {
    v9 = (unsigned int)v6[14];
  }
  else
  {
    v9 = 255LL;
  }
  if ( (byte_1401694F0 & 4) != 0 )
  {
    LODWORD(v15) = v3;
    LODWORD(v14) = v9;
    sub_1400541AC(v9, &stru_14014AD88, v4, a1, v14, v15);
  }
  if ( !v5 )
    return 0;
  ++v5[1338];
  v5[344] = v3;
  _InterlockedExchange(v5 + 345, 1);
  v11 = v18;
  sub_1400099A0((__int64)v18);
  if ( _InterlockedCompareExchange(v11 + 308, 134684676, 134684677) != 134684677 || v11 == (int *)-1216LL )
  {
    _InterlockedIncrement(&dword_1401688B8);
    v13 = v18;
    if ( (qword_140168458 & 0x800) != 0 )
      sub_14000FB90((__int64)v18, 22, retaddr, 344LL, 0LL, 0LL, 0LL);
    if ( !(unsigned int)sub_14000D2F0((__int64)v13, 0, 0) )
      KeInsertQueueDpc((PRKDPC)(v13 + 428), 0LL, 0LL);
  }
  else
  {
    v12 = (char *)(v18 + 252);
    v11[312] = 3;
    sub_14000F5E0(v12, (struct _SLIST_ENTRY *)v11 + 76);
  }
  return 1;
}
