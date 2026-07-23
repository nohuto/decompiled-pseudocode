/*
 * XREFs of CmpValidateGlobalFlushControlFlags @ 0x14085D180
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

void CmpValidateGlobalFlushControlFlags()
{
  if ( (*(_DWORD *)&CmpFreezeListLock.WaitRegister.Flags & 0xFFFFFFFE) != 0 )
    *(_DWORD *)&CmpFreezeListLock.WaitRegister.Flags = 0;
}
