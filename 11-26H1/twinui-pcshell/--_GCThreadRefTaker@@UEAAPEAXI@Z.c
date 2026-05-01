/*
 * XREFs of ??_GCThreadRefTaker@@UEAAPEAXI@Z @ 0x1803297B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CThreadRefTaker@@UEAA@XZ @ 0x1801EA8AC (--1CThreadRefTaker@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CThreadRefTaker *__fastcall CThreadRefTaker::`scalar deleting destructor'(CThreadRefTaker *this, char a2)
{
  CThreadRefTaker::~CThreadRefTaker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
