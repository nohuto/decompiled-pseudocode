/*
 * XREFs of ??1_ATL_BASE_MODULE70@ATL@@QEAA@XZ @ 0x18002EB88
 * Callers:
 *     ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x18002EB5C (--1CAtlBaseModule@ATL@@QEAA@XZ.c)
 * Callees:
 *     free @ 0x1800309BC (free.c)
 */

void __fastcall ATL::_ATL_BASE_MODULE70::~_ATL_BASE_MODULE70(ATL::_ATL_BASE_MODULE70 *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    free(v2);
    *((_QWORD *)this + 10) = 0LL;
  }
  *((_QWORD *)this + 11) = 0LL;
}
