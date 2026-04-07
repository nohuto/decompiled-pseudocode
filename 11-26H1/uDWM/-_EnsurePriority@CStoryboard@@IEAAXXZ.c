/*
 * XREFs of ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x18003E464
 * Callers:
 *     ?Initialize@CStoryboard@@MEAAJXZ @ 0x18003E230 (-Initialize@CStoryboard@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CStoryboard::_EnsurePriority(CStoryboard *this)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( *((int *)this + 16) < 0 )
  {
    *((_DWORD *)this + 16) = -1;
    while ( (unsigned int)v1 < 0x29 )
    {
      if ( dword_1800F57B0[2 * v1] == *(_DWORD *)(*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this) )
      {
        *((_DWORD *)this + 16) = dword_1800F57B0[2 * v1 + 1];
        return;
      }
      v1 = (unsigned int)(v1 + 1);
    }
  }
}
