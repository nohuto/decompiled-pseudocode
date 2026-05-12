/*
 * XREFs of sub_14012CDB4 @ 0x14012CDB4
 * Callers:
 *     sub_1400F7E54 @ 0x1400F7E54 (sub_1400F7E54.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14008ADD0 @ 0x14008ADD0 (sub_14008ADD0.c)
 *     sub_14012D540 @ 0x14012D540 (sub_14012D540.c)
 */

__int64 __fastcall sub_14012CDB4(__int64 a1)
{
  _DWORD *v2; // rbp
  unsigned int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // esi
  unsigned __int16 *v6; // rdx
  int v7; // eax
  __int64 v8; // rcx

  v2 = qword_140168E40;
  v3 = 0;
  v4 = sub_1400143E0(72LL, 192LL, 1313890642LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 128) = v4;
  if ( v4 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 128) + 144LL) = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 128) + 144LL) )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 128) + 24LL) = sub_1400143E0(
                                                    72LL,
                                                    dword_1401687C0
                                                  * ((dword_1401687C0 + 8 * v2[2] - 1)
                                                   / (unsigned int)dword_1401687C0),
                                                    1313890642LL,
                                                    *(_QWORD *)(a1 + 8));
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 128) + 24LL) )
      {
        v5 = 0;
        if ( v2[2] )
        {
          while ( 1 )
          {
            v6 = *(unsigned __int16 **)(56LL * v5 + *((_QWORD *)v2 + 4) + 48);
            v7 = v6 ? *v6 : 0x80000000;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 24LL) + 8LL * v5) = sub_14008ADD0(
                                                                                  72LL,
                                                                                  64LL,
                                                                                  1313890642LL,
                                                                                  *(_QWORD *)(a1 + 8),
                                                                                  v7);
            if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 24LL) + 8LL * v5) )
              break;
            if ( ++v5 >= v2[2] )
              goto LABEL_10;
          }
        }
        else
        {
LABEL_10:
          *(_QWORD *)(*(_QWORD *)(a1 + 128) + 32LL) = sub_1400143E0(72LL, 32LL, 1313890642LL, *(_QWORD *)(a1 + 8));
          v8 = *(_QWORD *)(a1 + 128);
          if ( *(_QWORD *)(v8 + 32) )
          {
            KeInitializeSpinLock((PKSPIN_LOCK)(v8 + 88));
            *(_DWORD *)(*(_QWORD *)(a1 + 128) + 72LL) = 1;
            *(_DWORD *)(*(_QWORD *)(a1 + 128) + 68LL) = 1;
            *(_QWORD *)(*(_QWORD *)(a1 + 128) + 16LL) = 0LL;
            *(_QWORD *)(*(_QWORD *)(a1 + 128) + 40LL) = 0LL;
            *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) = 0;
            *(_DWORD *)(*(_QWORD *)(a1 + 128) + 64LL) = 0;
            **(_BYTE **)(a1 + 128) = 1;
            *(_BYTE *)(a1 + 276) = 1;
            return v3;
          }
        }
      }
    }
  }
  v3 = -1073741670;
  sub_14012D540(a1);
  return v3;
}
