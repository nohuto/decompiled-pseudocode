/*
 * XREFs of ??$?0E$0A@@?$shared_ptr@$$BY0A@E@std@@QEAA@PEAE@Z @ 0x1802175FC
 * Callers:
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180126880 (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::shared_ptr<unsigned char [0]>::shared_ptr<unsigned char [0]>(_QWORD *a1, __int64 a2)
{
  _DWORD *v4; // rax
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = operator new(0x18uLL);
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_resource<unsigned char *,std::default_delete<unsigned char [0]>>::`vftable';
    *((_QWORD *)v4 + 2) = a2;
  }
  a1[1] = v4;
  result = a1;
  *a1 = a2;
  return result;
}
