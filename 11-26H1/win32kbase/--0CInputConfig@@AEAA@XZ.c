/*
 * XREFs of ??0CInputConfig@@AEAA@XZ @ 0x1401BDFA8
 * Callers:
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x14017FDA4 (-Initialize@CInputConfig@@SAJXZ.c)
 * Callees:
 *     ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x14008D984 (--0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z.c)
 */

CInputConfig *__fastcall CInputConfig::CInputConfig(CInputConfig *this)
{
  CInputConfig *result; // rax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v3 = 0LL;
  v4 = 0;
  CInputSpace::CInputSpace((CInputConfig *)((char *)this + 32), (const struct INPUT_SPACE *)&v3, 0);
  *((_WORD *)this + 752) = 1;
  result = this;
  *((_QWORD *)this + 1) = this;
  *(_QWORD *)this = this;
  return result;
}
