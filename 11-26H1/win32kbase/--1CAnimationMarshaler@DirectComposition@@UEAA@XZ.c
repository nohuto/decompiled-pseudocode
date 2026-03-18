/*
 * XREFs of ??1CAnimationMarshaler@DirectComposition@@UEAA@XZ @ 0x1400B1540
 * Callers:
 *     ??_GCAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1400B1508 (--_GCAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1400AFBB8 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CAnimationMarshaler::~CAnimationMarshaler(
        DirectComposition::CAnimationMarshaler *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rcx
  DirectComposition::CAnimationTimeList *v8; // rcx
  DirectComposition::CAnimationTimeList *v9; // rbx
  char *v10; // rcx

  *(_QWORD *)this = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
  *((_QWORD *)this + 2) = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
  v5 = (char *)this + 128;
  v6 = *((_QWORD *)this + 16);
  if ( *(DirectComposition::CAnimationMarshaler **)(v6 + 8) != (DirectComposition::CAnimationMarshaler *)((char *)this + 128)
    || (v7 = (__int64 *)*((_QWORD *)this + 17), (char *)*v7 != v5) )
  {
    __fastfail(3u);
  }
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = (DirectComposition::CAnimationTimeList *)*((_QWORD *)this + 9);
  if ( v8 )
  {
    do
    {
      v9 = (DirectComposition::CAnimationTimeList *)*((_QWORD *)v8 + 2);
      DirectComposition::CAnimationTimeList::Release(v8, v6, a3, a4);
      *((_QWORD *)this + 9) = v9;
      v8 = v9;
    }
    while ( v9 );
  }
  v10 = (char *)*((_QWORD *)this + 29);
  if ( v10 )
    GreDeleteFastMutex(v10, v6, a3, a4);
}
