/*
 * XREFs of sub_140131CA0 @ 0x140131CA0
 * Callers:
 *     HandleInformation @ 0x140132940 (HandleInformation.c)
 * Callees:
 *     sub_140131B14 @ 0x140131B14 (sub_140131B14.c)
 *     sub_140131F80 @ 0x140131F80 (sub_140131F80.c)
 *     sub_140132010 @ 0x140132010 (sub_140132010.c)
 *     sub_140132B04 @ 0x140132B04 (sub_140132B04.c)
 */

void __fastcall sub_140131CA0(__int64 a1, int a2)
{
  __int64 v2; // rbp
  unsigned int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // r9d

  if ( !a1 )
    return;
  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return;
  if ( (int)sub_140132010() < 0 )
    return;
  v5 = *(_DWORD *)(a1 + 8);
  if ( (unsigned int)sub_140131B14(*(_DWORD *)(a1 + 76)) == a2 )
    return;
  switch ( a2 )
  {
    case 3:
      *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(a1 + 76) = 1;
      break;
    case 4:
      v6 = *(_DWORD *)(a1 + 56);
      v7 = 2;
      *(_DWORD *)(a1 + 76) = 2;
      if ( v6 < 2 )
        v7 = v6;
      *(_DWORD *)(a1 + 60) = v7;
      break;
    case 5:
      *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(a1 + 76) = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 12), 0);
      goto LABEL_14;
    default:
      return;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 12), 0);
LABEL_14:
  v8 = *(_DWORD *)(a1 + 60);
  if ( v5 != v8 && (int)sub_140132B04(a1, *(_QWORD *)(v2 + 6216), a2, v8, *(_WORD *)(a1 + 4)) >= 0 )
    sub_140131F80(a1, v5);
}
