/*
 * XREFs of ?UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ @ 0x180056170
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTopLevelWindow::UpdateDCompVisuals(CTopLevelWindow *this)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 87);
  if ( v1 && *(_DWORD *)(v1 + 560) )
  {
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v1 + 536) + 8 * v3);
      if ( *(_BYTE *)(v4 + 34) )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 104) + 48LL))(*(_QWORD *)(v4 + 104));
      v1 = *((_QWORD *)this + 87);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(v1 + 560) );
  }
}
