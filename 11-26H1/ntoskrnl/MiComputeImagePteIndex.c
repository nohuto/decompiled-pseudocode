/*
 * XREFs of MiComputeImagePteIndex @ 0x14038ECA0
 * Callers:
 *     MiReferenceInPageFile @ 0x14038F034 (MiReferenceInPageFile.c)
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiGetSharedProtos @ 0x140374988 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiComputeImagePteIndex(__int64 a1)
{
  __int64 v1; // rbx
  __int64 SubsectionFromPte; // rsi
  unsigned int v3; // r9d
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 SharedProtos; // rax

  v1 = *(_QWORD *)(a1 + 8);
  SubsectionFromPte = MiGetSubsectionFromPte(*(_QWORD *)(a1 + 16));
  v4 = *(_QWORD *)SubsectionFromPte;
  if ( (*(_DWORD *)(SubsectionFromPte + 32) & 0x20000) != 0
    && (*(_DWORD *)(v4 + 56) & 8) != 0
    && (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
  {
    SharedProtos = MiGetSharedProtos(v4, v3, SubsectionFromPte);
    v6 = (__int64)(*(_QWORD *)(SubsectionFromPte + 8) - *(_QWORD *)(v4 + 136)) >> 3;
    v5 = *(_QWORD *)(SharedProtos + 72);
  }
  else
  {
    v5 = *(_QWORD *)(v4 + 136);
    LODWORD(v6) = 0;
  }
  return (unsigned int)v6 + (unsigned int)((v1 - v5) >> 3);
}
