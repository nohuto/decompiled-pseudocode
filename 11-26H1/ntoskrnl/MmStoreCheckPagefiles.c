/*
 * XREFs of MmStoreCheckPagefiles @ 0x14077C774
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14063CDAC (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     MmStoreRegister @ 0x14087D67C (MmStoreRegister.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmStoreCheckPagefiles(__int64 a1)
{
  __int64 i; // rdx
  __int16 v2; // ax

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)a1 + 22296LL); i = (unsigned int)(i + 1) )
  {
    v2 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8 * i + 22304) + 172LL);
    if ( (v2 & 0x400) != 0 || (v2 & 0x800) != 0 )
      return 0LL;
  }
  return 1LL;
}
