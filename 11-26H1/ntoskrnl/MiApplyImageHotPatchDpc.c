/*
 * XREFs of MiApplyImageHotPatchDpc @ 0x140C077F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalCallDpcSynchronize @ 0x140307790 (KeSignalCallDpcSynchronize.c)
 *     RtlApplyHotPatch @ 0x140C0827C (RtlApplyHotPatch.c)
 */

__int64 __fastcall MiApplyImageHotPatchDpc(__int64 a1, _QWORD *a2, volatile signed __int32 *a3, __int64 a4)
{
  __int64 result; // rax
  char v8; // [rsp+28h] [rbp-D0h]
  int v9; // [rsp+48h] [rbp-B0h]
  int v10; // [rsp+78h] [rbp-80h]
  int v11; // [rsp+C8h] [rbp-30h]
  __int64 v12; // [rsp+D0h] [rbp-28h]
  __int64 v13; // [rsp+D8h] [rbp-20h]
  int v14; // [rsp+E0h] [rbp-18h]

  if ( (unsigned int)KeSignalCallDpcSynchronize(a4) )
    *((_DWORD *)a2 + 11) = RtlApplyHotPatch(
                             *(_QWORD *)(*a2 + 72LL),
                             *(_QWORD *)(*a2 + 8LL),
                             *(_QWORD *)(*a2 + 80LL),
                             *(_DWORD *)(*a2 + 36LL),
                             (__int64)(a2 + 5),
                             v8,
                             *(_QWORD *)(*a2 + 144LL),
                             *(_DWORD *)(*a2 + 152LL),
                             0LL,
                             v9,
                             *(_QWORD *)(a2[1] + 72LL),
                             *(_QWORD *)(a2[1] + 8LL),
                             0LL,
                             0,
                             0LL,
                             v10,
                             0LL,
                             0,
                             a2[2],
                             a2[3],
                             1,
                             *(_WORD *)(*a2 + 136LL),
                             *(PRTL_BITMAP *)(*a2 + 40LL),
                             a2[4],
                             0LL,
                             v11,
                             v12,
                             v13,
                             v14);
  result = KeSignalCallDpcSynchronize(a4);
  _InterlockedDecrement(a3);
  return result;
}
