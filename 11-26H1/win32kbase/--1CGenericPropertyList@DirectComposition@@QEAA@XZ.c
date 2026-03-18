/*
 * XREFs of ??1CGenericPropertyList@DirectComposition@@QEAA@XZ @ 0x14014280C
 * Callers:
 *     ??_GCGenericMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1401427D0 (--_GCGenericMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall DirectComposition::CGenericPropertyList::~CGenericPropertyList(
        char ***this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char **v4; // rbx
  __int64 v6; // rdi

  v4 = *this;
  v6 = (__int64)&(*this)[(_QWORD)this[1]];
  while ( v4 != (char **)v6 )
    GreDeleteFastMutex(*v4++, a2, a3, a4);
  GreDeleteFastMutex((char *)*this, a2, a3, a4);
}
