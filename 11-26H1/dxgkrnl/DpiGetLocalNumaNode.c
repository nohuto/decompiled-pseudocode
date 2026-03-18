/*
 * XREFs of DpiGetLocalNumaNode @ 0x14023A380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetLocalNumaNode(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned __int16 v3; // bx
  USHORT NodeNumber; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  NodeNumber = 0;
  if ( *(_DWORD *)(v2 + 504) )
    v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 2832) + 8LL * a2) + 64LL);
  if ( IoGetDeviceNumaNode(*(PDEVICE_OBJECT *)(v2 + 152), &NodeNumber) >= 0 )
    return (unsigned __int16)(NodeNumber + 1);
  return v3;
}
