/*
 * XREFs of SmpCreateKnownSubSys @ 0x140007FB0
 * Callers:
 *     SmpHandleConnectionRequest @ 0x1400061A0 (SmpHandleConnectionRequest.c)
 *     SmpLoadSubSystem @ 0x140016D30 (SmpLoadSubSystem.c)
 * Callees:
 *     SmpGetSubSysSynch @ 0x1400194E4 (SmpGetSubSysSynch.c)
 */

_DWORD *__fastcall SmpCreateKnownSubSys(int a1)
{
  _DWORD *result; // rax
  _DWORD *v3; // rbx
  __int64 SubSysSynch; // rax

  result = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag + 0x80000, 0x58uLL);
  v3 = result;
  if ( result )
  {
    if ( (a1 & 1) != 0 )
    {
      *((_QWORD *)result + 2) = 0LL;
LABEL_4:
      *(_QWORD *)v3 = 1LL;
      v3[2] = a1;
      result = v3;
      v3[6] = -1;
      *((_QWORD *)v3 + 4) = 0LL;
      *((_QWORD *)v3 + 5) = 0LL;
      *((_OWORD *)v3 + 3) = 0LL;
      return result;
    }
    SubSysSynch = SmpGetSubSysSynch();
    *((_QWORD *)v3 + 2) = SubSysSynch;
    if ( SubSysSynch )
      goto LABEL_4;
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
    return 0LL;
  }
  return result;
}
