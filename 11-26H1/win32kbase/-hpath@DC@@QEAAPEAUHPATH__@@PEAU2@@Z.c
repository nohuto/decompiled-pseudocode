/*
 * XREFs of ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x140034A80
 * Callers:
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x14003453C (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x140019050 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x140034B64 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x140034C24 (--1XEPATHOBJ@@QEAA@XZ.c)
 */

struct HPATH__ *__fastcall DC::hpath(DC *this, struct HPATH__ *a2)
{
  struct HPATH__ *v4; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 SessionState; // rax
  __int64 v9; // rax
  _BYTE v10[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned int *v11; // [rsp+28h] [rbp-80h]

  v4 = (struct HPATH__ *)*((_QWORD *)this + 25);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v10, v4);
      if ( v11 && (v11[22] & 1) == 0 )
      {
        SessionState = W32GetSessionState(v6);
        HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v11);
      }
      *((_QWORD *)this + 25) = 0LL;
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v10);
    }
    if ( a2 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v10, a2);
      if ( v11 )
      {
        if ( (v11[22] & 1) == 0 )
        {
          v9 = W32GetSessionState(v7);
          HmgIncrementShareReferenceCount(*(_QWORD *)(v9 + 88), v11);
        }
        *((_QWORD *)this + 25) = a2;
      }
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v10);
    }
  }
  return (struct HPATH__ *)*((_QWORD *)this + 25);
}
