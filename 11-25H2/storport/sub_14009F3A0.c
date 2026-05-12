/*
 * XREFs of sub_14009F3A0 @ 0x14009F3A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140071DC8 @ 0x140071DC8 (sub_140071DC8.c)
 */

void __fastcall sub_14009F3A0(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rax
  int v6; // edx
  _WORD *v7; // rdi
  __int64 v8; // rax
  signed __int32 v9[8]; // [rsp+0h] [rbp-78h] BYREF

  if ( *(_QWORD *)(a2 + 216) )
  {
    v4 = *(_DWORD **)(a1 + 24);
    if ( *v4 == 1094997074 )
    {
      v5 = (__int64)v4 + 483;
    }
    else if ( *v4 == 1314275652 )
    {
      v5 = (__int64)v4 + 275;
    }
    else
    {
      v5 = 107LL;
    }
    if ( !*(_BYTE *)v5 )
    {
      v7 = (_WORD *)sub_1400143E0(64LL, 16LL, 1398038866LL, *(_QWORD *)(a1 + 8));
      if ( v7 )
      {
        v8 = *(_QWORD *)(a2 + 168);
        if ( *(_BYTE *)(v8 + 2) == 40 )
        {
          *(_OWORD *)v7 = *(_OWORD *)(*(unsigned int *)(v8 + 52) + v8);
        }
        else
        {
          *v7 = 1;
          v7[1] = *(unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 56LL);
          *((_DWORD *)v7 + 1) = 4;
          *((_BYTE *)v7 + 8) = *(_BYTE *)(a1 + 104);
          *((_BYTE *)v7 + 9) = *(_BYTE *)(a1 + 105);
          *((_BYTE *)v7 + 10) = *(_BYTE *)(a1 + 106);
          *((_BYTE *)v7 + 11) = 0;
        }
        if ( (byte_1401694F0 & 2) != 0 )
          sub_140071DC8(
            *(_QWORD *)(a1 + 24),
            v6,
            (const GUID *)(a2 + 728),
            a1,
            *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
            1,
            *(_BYTE *)(a1 + 104),
            *(_BYTE *)(a1 + 105),
            *(_BYTE *)(a1 + 106),
            0,
            &sub_14009F5A0,
            v7);
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4824LL), 1, 0) )
        {
          _InterlockedOr(v9, 0);
          *(_DWORD *)(*(_QWORD *)(a2 + 216) + 4828LL) = 2;
          *(_QWORD *)(*(_QWORD *)(a2 + 216) + 4840LL) = v7;
          *(_DWORD *)(*(_QWORD *)(a2 + 216) + 4832LL) = 0;
          *(_QWORD *)(*(_QWORD *)(a2 + 216) + 4848LL) = &sub_14009F5A0;
          *(_QWORD *)(*(_QWORD *)(a2 + 216) + 4856LL) = 0LL;
          _InterlockedOr(v9, 0);
          *(_BYTE *)(*(_QWORD *)(a2 + 216) + 104LL) |= 0x40u;
LABEL_18:
          *(_BYTE *)(*(_QWORD *)(a2 + 216) + 105LL) = 1;
          KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(a2 + 216) + 1912LL), 0LL, 0LL);
          return;
        }
        ExFreePoolWithTag(v7, 0x53546152u);
      }
    }
    *(_BYTE *)(*(_QWORD *)(a2 + 216) + 106LL) = 1;
    goto LABEL_18;
  }
}
