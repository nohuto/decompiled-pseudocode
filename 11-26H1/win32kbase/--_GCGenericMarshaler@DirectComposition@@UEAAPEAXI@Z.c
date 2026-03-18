/*
 * XREFs of ??_GCGenericMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1401427D0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CGenericPropertyList@DirectComposition@@QEAA@XZ @ 0x14014280C (--1CGenericPropertyList@DirectComposition@@QEAA@XZ.c)
 */

char *__fastcall DirectComposition::CGenericMarshaler::`scalar deleting destructor'(char *Buffer, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  DirectComposition::CGenericPropertyList::~CGenericPropertyList((DirectComposition::CGenericPropertyList *)(Buffer + 56));
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex(Buffer, v4, v5, v6);
  return Buffer;
}
