/*
 * XREFs of ??_G_Locimp@locale@std@@MEAAPEAXI@Z @ 0x180005240
 * Callers:
 *     <none>
 * Callees:
 *     ?_Locimp_dtor@_Locimp@locale@std@@CAXPEAV123@@Z @ 0x1800053AC (-_Locimp_dtor@_Locimp@locale@std@@CAXPEAV123@@Z.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180021B5D (--3@YAXPEAX@Z_0.c)
 */

// Hidden C++ exception states: #wind=1
std::locale::_Locimp *__fastcall std::locale::_Locimp::`scalar deleting destructor'(
        std::locale::_Locimp *this,
        char a2)
{
  void *v4; // rcx

  *(_QWORD *)this = &std::locale::_Locimp::`vftable';
  std::locale::_Locimp::_Locimp_dtor(this);
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
    free(v4);
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
