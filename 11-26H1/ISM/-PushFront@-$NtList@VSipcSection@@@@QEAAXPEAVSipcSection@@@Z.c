/*
 * XREFs of ?PushFront@?$NtList@VSipcSection@@@@QEAAXPEAVSipcSection@@@Z @ 0x1801128E8
 * Callers:
 *     ?AddReceivedSection@SipcPort@@IEAAXPEAVSipcSection@@PEAUSipcPortEvent@@@Z @ 0x18011004C (-AddReceivedSection@SipcPort@@IEAAXPEAVSipcSection@@PEAUSipcPortEvent@@@Z.c)
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXPEAPEAX@Z @ 0x1801113C0 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtList<SipcSection>::PushFront(_DWORD *a1, __int64 a2)
{
  _QWORD *v2; // r8
  __int64 result; // rax

  v2 = (_QWORD *)((a2 + 8) & -(__int64)(a2 != 0));
  result = *(_QWORD *)a1;
  if ( *(_DWORD **)(*(_QWORD *)a1 + 8LL) != a1 )
    __fastfail(3u);
  *v2 = result;
  *(_QWORD *)(((a2 + 8) & -(__int64)(a2 != 0)) + 8) = a1;
  *(_QWORD *)(result + 8) = v2;
  ++a1[4];
  *(_QWORD *)a1 = v2;
  return result;
}
