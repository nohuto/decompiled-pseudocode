/*
 * XREFs of sub_14000B0B0 @ 0x14000B0B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000B2CC @ 0x14000B2CC (sub_14000B2CC.c)
 *     sub_14000B3C0 @ 0x14000B3C0 (sub_14000B3C0.c)
 *     sub_14000B424 @ 0x14000B424 (sub_14000B424.c)
 *     sub_14000BF6C @ 0x14000BF6C (sub_14000BF6C.c)
 *     sub_14000C6B0 @ 0x14000C6B0 (sub_14000C6B0.c)
 *     sub_14000D2F0 @ 0x14000D2F0 (sub_14000D2F0.c)
 *     sub_14003E6C0 @ 0x14003E6C0 (sub_14003E6C0.c)
 *     sub_14003F8D8 @ 0x14003F8D8 (sub_14003F8D8.c)
 *     sub_140051828 @ 0x140051828 (sub_140051828.c)
 *     sub_140059D04 @ 0x140059D04 (sub_140059D04.c)
 *     sub_140059DF8 @ 0x140059DF8 (sub_140059DF8.c)
 *     sub_14005B15C @ 0x14005B15C (sub_14005B15C.c)
 *     sub_14006191C @ 0x14006191C (sub_14006191C.c)
 *     sub_14009FCA0 @ 0x14009FCA0 (sub_14009FCA0.c)
 */

void __fastcall sub_14000B0B0(__int64 a1, LARGE_INTEGER *a2, char a3)
{
  __int64 v3; // rbx
  LARGE_INTEGER *v5; // rdi
  int LowPart; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // rdx

  v3 = *(_QWORD *)(a1 + 64);
  v5 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 4120));
  LowPart = a2[4].LowPart;
  if ( LowPart == 7 )
  {
    sub_14000B424(*(PKSPIN_LOCK *)(v3 + 960));
    goto LABEL_9;
  }
  if ( LowPart > 7 )
  {
    v12 = LowPart - 8;
    if ( !v12 )
    {
      LOBYTE(a2) = 1;
      sub_140051828(*(_QWORD *)(v3 + 960), a2);
      goto LABEL_33;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_14009FCA0)(
              v3,
              (unsigned int)a2[4].HighPart,
              (LARGE_INTEGER)a2[5].QuadPart);
        }
        else
        {
          KeSetCoalescableTimer((PKTIMER)(a2[5].QuadPart + 8), a2[6], 0, a2[7].LowPart, (PKDPC)(a2[5].QuadPart + 72));
        }
      }
      else
      {
        sub_140059DF8(v3, (unsigned int)a2[4].HighPart);
      }
    }
    else
    {
      sub_140059D04(v3, (unsigned int)a2[4].HighPart, a2[5].LowPart);
    }
  }
  else
  {
    v7 = LowPart - 1;
    if ( !v7 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_14000B3C0)(v3, (LARGE_INTEGER)a2[5].QuadPart, a2[6].LowPart);
      goto LABEL_9;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      sub_14005B15C(v3, (unsigned int)a2[4].HighPart, a2[6].LowPart, (unsigned int)a2[6].HighPart);
      goto LABEL_9;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            sub_14000BF6C(v3, (unsigned int)a2[4].HighPart);
        }
        else
        {
          sub_14000B2CC(v3, (unsigned int)a2[4].HighPart, a2[5].LowPart);
        }
      }
      else
      {
        sub_14003F8D8(v3 + 1008);
        v5 = 0LL;
        if ( !*(_DWORD *)(v3 + 1380) )
          sub_14003E6C0(v3, v3 + 1776);
      }
      goto LABEL_9;
    }
    sub_14003F8D8(v3 + 1008);
    v5 = 0LL;
    if ( *(_DWORD *)(v3 + 1380) == 1 )
    {
      sub_14006191C(v3, v3 + 1776, v3 + 1648, *(unsigned int *)(v3 + 1376));
      goto LABEL_9;
    }
    LOBYTE(v16) = a3;
    if ( !(unsigned int)sub_14000D2F0(v3, 0LL, v16) )
    {
LABEL_33:
      LOBYTE(v17) = a3;
      sub_14000C6B0(v3, v17);
    }
  }
LABEL_9:
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 4120));
  if ( v5 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)&v5[2], 134684677, 134684676) != 134684676 )
    {
      v5[2].LowPart = 134684675;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v3 + 1088), (PSLIST_ENTRY)v5);
    }
  }
}
