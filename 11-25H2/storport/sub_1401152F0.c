/*
 * XREFs of sub_1401152F0 @ 0x1401152F0
 * Callers:
 *     sub_1400F73A0 @ 0x1400F73A0 (sub_1400F73A0.c)
 *     sub_1401172A0 @ 0x1401172A0 (sub_1401172A0.c)
 *     sub_140117A50 @ 0x140117A50 (sub_140117A50.c)
 *     sub_1401190B0 @ 0x1401190B0 (sub_1401190B0.c)
 *     sub_14011ACA0 @ 0x14011ACA0 (sub_14011ACA0.c)
 *     sub_14011C9D0 @ 0x14011C9D0 (sub_14011C9D0.c)
 *     sub_14011EBD0 @ 0x14011EBD0 (sub_14011EBD0.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1401152F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  unsigned int v5; // ebp
  _WORD *v6; // r12
  __int16 v7; // dx
  __int64 v8; // rsi
  __int64 v9; // r14
  char v10; // si
  __int64 v11; // rdi
  KIRQL v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rax

  v2 = a2;
  result = HIDWORD(a1[17]);
  if ( (result & 1) == 0 )
  {
    result = 0LL;
    v5 = 0;
    v6 = (_WORD *)(a2 + 32);
    v7 = *(_WORD *)(a2 + 32);
    if ( v7 )
    {
      do
      {
        LOWORD(result) = v7;
        if ( v2 )
        {
          v8 = *(_QWORD *)(v2 + 88);
          if ( v8 )
          {
            v9 = *(_QWORD *)(v8 + 24);
            if ( v9 )
            {
              v10 = *(_BYTE *)(v8 + 126);
              v11 = a1[16];
              v12 = KfRaiseIrql(2u);
              (*(void (__fastcall **)(_QWORD, __int64, bool))(*(_QWORD *)(*(_QWORD *)(v11 + 1144) + 8LL) + 96LL))(
                *(_QWORD *)(v11 + 1144),
                v9,
                (v10 & 1) == 0);
              if ( v12 < 2u )
                KeLowerIrql(v12);
            }
            v13 = *(_QWORD *)(v2 + 88);
            v14 = *(unsigned int *)(v13 + 120);
            *(_QWORD *)(v13 + 24) = 0LL;
            *(_QWORD *)(v13 + 88) = 0LL;
            *(_BYTE *)(v13 + 126) = 0;
            ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(a1[112] + 8 * v14), (PSLIST_ENTRY)v13);
            LOWORD(result) = *v6;
          }
          v2 = *(_QWORD *)(v2 + 96);
        }
        v7 = result;
        ++v5;
        result = (unsigned __int16)result;
      }
      while ( v5 < (unsigned __int16)result );
    }
  }
  return result;
}
