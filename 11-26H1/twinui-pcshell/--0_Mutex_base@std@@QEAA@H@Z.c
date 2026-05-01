/*
 * XREFs of ??0_Mutex_base@std@@QEAA@H@Z @ 0x180216B0C
 * Callers:
 *     ??0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1806120B4 (--0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

std::_Mutex_base *__fastcall std::_Mutex_base::_Mutex_base(std::_Mutex_base *this)
{
  std::_Mutex_base *result; // rax

  *(_QWORD *)this = 2LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 19) = 0;
  result = this;
  *((_DWORD *)this + 18) = -1;
  return result;
}
