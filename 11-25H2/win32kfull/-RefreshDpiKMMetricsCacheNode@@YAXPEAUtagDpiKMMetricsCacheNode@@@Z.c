/*
 * XREFs of ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1401F2FF0
 * Callers:
 *     GetDPIMETRICSForDpiUnsafe @ 0x140042E78 (GetDPIMETRICSForDpiUnsafe.c)
 * Callees:
 *     CreateScaledFont @ 0x1401E7300 (CreateScaledFont.c)
 */

void __fastcall RefreshDpiKMMetricsCacheNode(struct tagDpiKMMetricsCacheNode *a1)
{
  Gre::Base **v2; // rsi
  __int64 v3; // r8
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r8
  __int128 v10; // [rsp+40h] [rbp-48h] BYREF
  __int128 v11; // [rsp+50h] [rbp-38h]
  __int128 v12; // [rsp+60h] [rbp-28h]
  __int64 v13; // [rsp+70h] [rbp-18h]
  int v14; // [rsp+78h] [rbp-10h]

  if ( *((_WORD *)a1 + 1) )
  {
    v2 = (Gre::Base **)Get96DpiMetrics();
    CreateScaledFont(
      v2[4],
      (__int64 *)a1 + 6,
      (__int64)a1 + 60,
      *(unsigned __int16 *)a1,
      (_DWORD *)a1 + 14,
      (_DWORD *)a1 + 15,
      0LL);
    v10 = 0LL;
    v13 = 0LL;
    v11 = 0LL;
    v14 = 0;
    v12 = 0LL;
    if ( !*((_QWORD *)a1 + 2) )
    {
      if ( (unsigned int)CreateScaledFont(
                           *v2,
                           (__int64 *)a1 + 2,
                           v3,
                           *(unsigned __int16 *)a1,
                           (_DWORD *)a1 + 6,
                           (_DWORD *)a1 + 7,
                           (__int64)&v10) )
      {
        v4 = v11;
        v5 = v12;
        *((_DWORD *)a1 + 9) = v11;
        v6 = *((_DWORD *)a1 + 7) + v4 + 2;
        *((_DWORD *)a1 + 8) = v5;
        v7 = DWORD1(v10) + 1;
        *((_DWORD *)a1 + 11) = v6;
        *((_DWORD *)a1 + 10) = v7;
      }
    }
    CreateScaledFont(v2[6], (__int64 *)a1 + 8, v3, *(unsigned __int16 *)a1, 0LL, 0LL, 0LL);
    CreateScaledFont(v2[7], (__int64 *)a1 + 9, v8, *(unsigned __int16 *)a1, 0LL, 0LL, 0LL);
    CreateScaledFont(v2[8], (__int64 *)a1 + 10, v9, *(unsigned __int16 *)a1, 0LL, 0LL, 0LL);
    *((_WORD *)a1 + 1) = 0;
  }
}
