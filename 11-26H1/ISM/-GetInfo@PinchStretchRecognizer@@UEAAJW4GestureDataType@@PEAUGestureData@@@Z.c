/*
 * XREFs of ?GetInfo@PinchStretchRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x1801B8F10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PinchStretchRecognizer::GetInfo(__int64 a1, int a2, __int64 a3)
{
  int v4; // r10d
  __int64 v5; // rcx
  __int64 v7; // [rsp+40h] [rbp+18h]

  if ( *(_DWORD *)a3 != 56 || a2 != 6 || (*(_BYTE *)(a1 + 56) & 2) == 0 )
    return 2147942487LL;
  *(_QWORD *)(a3 + 4) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a3 + 12) = *(_QWORD *)(a1 + 40);
  LODWORD(v7) = *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 16);
  HIDWORD(v7) = *(_DWORD *)(a1 + 36) - *(_DWORD *)(a1 + 20);
  *(_QWORD *)(a3 + 28) = v7;
  LODWORD(v7) = *(_DWORD *)(a1 + 40) - *(_DWORD *)(a1 + 24);
  HIDWORD(v7) = *(_DWORD *)(a1 + 44) - *(_DWORD *)(a1 + 28);
  *(_QWORD *)(a3 + 36) = v7;
  v4 = (*(_DWORD *)(a1 + 24) + *(_DWORD *)(a1 + 16)) / 2;
  LODWORD(v7) = (*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 40)) / 2;
  HIDWORD(v7) = (*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 36)) / 2;
  v5 = v7;
  HIDWORD(v7) -= (*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 28)) / 2;
  *(_QWORD *)(a3 + 20) = v5;
  LODWORD(v7) = v7 - v4;
  *(_QWORD *)(a3 + 44) = v7;
  *(_BYTE *)(a3 + 52) = (*(_BYTE *)(a1 + 56) & 1) == 0;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, 0xFFFFFFFFLL);
  return 0LL;
}
