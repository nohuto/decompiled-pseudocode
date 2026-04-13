/*
 * XREFs of ??0_Locimp@locale@std@@AEAA@AEBV012@@Z @ 0x1800051AC
 * Callers:
 *     ?_New_Locimp@_Locimp@locale@std@@CAPEAV123@AEBV123@@Z @ 0x1800054CC (-_New_Locimp@_Locimp@locale@std@@CAPEAV123@AEBV123@@Z.c)
 * Callees:
 *     ?_Locimp_ctor@_Locimp@locale@std@@CAXPEAV123@AEBV123@@Z @ 0x180009964 (-_Locimp_ctor@_Locimp@locale@std@@CAXPEAV123@AEBV123@@Z.c)
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x180068064 (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
std::locale::_Locimp *__fastcall std::locale::_Locimp::_Locimp(
        std::locale::_Locimp *this,
        const struct std::locale::_Locimp *a2)
{
  char *v4; // rcx
  char *v5; // rdx

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &std::locale::_Locimp::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = *((_QWORD *)a2 + 3);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_BYTE *)this + 36) = *((_BYTE *)a2 + 36);
  v4 = (char *)this + 40;
  v5 = (char *)*((_QWORD *)a2 + 5);
  if ( !v5 )
    v5 = (char *)a2 + 48;
  *(_QWORD *)v4 = 0LL;
  v4[8] = 0;
  std::_Yarn<char>::operator=(v4, v5);
  std::locale::_Locimp::_Locimp_ctor(this, a2);
  return this;
}
