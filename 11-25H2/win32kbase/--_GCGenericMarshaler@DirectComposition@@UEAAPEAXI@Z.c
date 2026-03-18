/*
 * XREFs of ??_GCGenericMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140100D90
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CGenericPropertyList@DirectComposition@@QEAA@XZ @ 0x140100DCC (--1CGenericPropertyList@DirectComposition@@QEAA@XZ.c)
 */

char *__fastcall DirectComposition::CGenericMarshaler::`scalar deleting destructor'(char *Buffer, char a2)
{
  DirectComposition::CGenericPropertyList::~CGenericPropertyList((DirectComposition::CGenericPropertyList *)(Buffer + 56));
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex(Buffer);
  return Buffer;
}
