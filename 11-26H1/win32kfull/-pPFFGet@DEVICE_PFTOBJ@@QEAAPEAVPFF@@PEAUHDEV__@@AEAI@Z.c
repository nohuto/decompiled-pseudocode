/*
 * XREFs of ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@AEAI@Z @ 0x1400FDD9C
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400C79A0 (-ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@.c)
 *     ?GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z @ 0x1400FDE44 (-GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z.c)
 *     HDEV_DeleteRfontsAndUnloadDeviceFonts @ 0x140105ED0 (HDEV_DeleteRfontsAndUnloadDeviceFonts.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x140327194 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1403369CC (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     ??EPffIterator@@QEAAAEAV0@XZ @ 0x140296FC4 (--EPffIterator@@QEAAAEAV0@XZ.c)
 *     ??0PffIterator@@QEAA@PEAVPFF@@@Z @ 0x140297050 (--0PffIterator@@QEAA@PEAVPFF@@@Z.c)
 */

struct PFF *__fastcall DEVICE_PFTOBJ::pPFFGet(DEVICE_PFTOBJ *this, unsigned __int64 a2, unsigned int *a3)
{
  int v3; // r9d
  unsigned __int64 v4; // r11
  __int64 v5; // r10
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  struct PFF *result; // rax
  struct PFF *v9; // rcx
  struct PFF *i; // rdx
  bool v11; // cl
  struct PFF *v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  LODWORD(v12) = 0;
  v4 = a2;
  v5 = *(_QWORD *)this;
  v6 = *(unsigned int *)(*(_QWORD *)this + 24LL);
  v7 = (a2 >> 4) % v6;
  *a3 = v7;
  if ( (unsigned int)v7 >= (unsigned int)v6 )
  {
    PffIterator::PffIterator((PffIterator *)&v12, 0LL);
    goto LABEL_12;
  }
  result = *(struct PFF **)(v5 + 8LL * (unsigned int)v7 + 40);
  v12 = result;
  v9 = result;
  for ( i = result; ; i = v9 )
  {
    v11 = 0;
    if ( v9 )
    {
      v3 |= 1u;
      if ( (*((_DWORD *)i + 13) & 0x10000) != 0 )
        v11 = 1;
    }
    if ( (v3 & 1) != 0 )
      v3 &= ~1u;
    if ( !v11 )
      break;
    v9 = (struct PFF *)*((_QWORD *)result + 1);
    result = v9;
    v12 = v9;
  }
  while ( result && v4 != *((_QWORD *)result + 12) )
  {
    PffIterator::operator++(&v12);
LABEL_12:
    result = v12;
  }
  return result;
}
