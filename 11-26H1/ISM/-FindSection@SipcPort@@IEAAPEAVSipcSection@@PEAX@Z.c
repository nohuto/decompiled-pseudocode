/*
 * XREFs of ?FindSection@SipcPort@@IEAAPEAVSipcSection@@PEAX@Z @ 0x180111964
 * Callers:
 *     ?FreeSection@SipcPort@@QEAAJPEAX@Z @ 0x18011199C (-FreeSection@SipcPort@@QEAAJPEAX@Z.c)
 *     ?ProtectBuffer@SipcEndpoint@@UEAAJPEAX_K1@Z @ 0x180112830 (-ProtectBuffer@SipcEndpoint@@UEAAJPEAX_K1@Z.c)
 *     ?ShareSection@AlpcPort@@UEAAJPEAX_NPEA_K@Z @ 0x180113380 (-ShareSection@AlpcPort@@UEAAJPEAX_NPEA_K@Z.c)
 * Callees:
 *     <none>
 */

struct SipcSection *__fastcall SipcPort::FindSection(SipcPort *this, void *a2)
{
  SipcPort *i; // rax

  for ( i = (SipcPort *)*((_QWORD *)this + 1); i != (SipcPort *)((char *)this + 8); i = *(SipcPort **)i )
  {
    if ( *(void **)((((unsigned __int64)i - 8) & -(__int64)(i != 0LL)) + 0x20) == a2 )
      return (struct SipcSection *)(((unsigned __int64)i - 8) & -(__int64)(i != 0LL));
  }
  return 0LL;
}
