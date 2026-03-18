/*
 * XREFs of ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1400C6250
 * Callers:
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x140178E6C (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x14001C920 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1400C6308 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1400C637C (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 */

struct HPATH__ *__fastcall DC::hpath(DC *this, struct HPATH__ *a2)
{
  struct HPATH__ *v4; // rdx
  _BYTE v6[8]; // [rsp+20h] [rbp-88h] BYREF
  struct _BASEOBJECT *v7; // [rsp+28h] [rbp-80h]

  v4 = (struct HPATH__ *)*((_QWORD *)this + 25);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v6, v4);
      if ( v7 && (*((_DWORD *)v7 + 22) & 1) == 0 )
        HmgDecrementShareReferenceCountEx(v7, 0LL);
      *((_QWORD *)this + 25) = 0LL;
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v6);
    }
    if ( a2 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v6, a2);
      if ( v7 )
      {
        if ( (*((_DWORD *)v7 + 22) & 1) == 0 )
          HmgIncrementShareReferenceCount(v7);
        *((_QWORD *)this + 25) = a2;
      }
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v6);
    }
  }
  return (struct HPATH__ *)*((_QWORD *)this + 25);
}
