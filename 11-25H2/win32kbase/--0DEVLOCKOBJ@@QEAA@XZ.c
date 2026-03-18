/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14008E530
 * Callers:
 *     GreGetClipBox @ 0x14008E7A0 (GreGetClipBox.c)
 *     GreGetNearestColor @ 0x14008EEF0 (GreGetNearestColor.c)
 * Callees:
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x14008E5C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  int (*v2)(void); // rax
  void (__fastcall *v3)(DEVLOCKOBJ *, _QWORD); // rax
  DEVLOCKOBJ *result; // rax

  DLODCOBJ::DLODCOBJ((DEVLOCKOBJ *)((char *)this + 32));
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 768LL);
  if ( v2 )
  {
    if ( v2() >= 0 )
    {
      v3 = *(void (__fastcall **)(DEVLOCKOBJ *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 776LL);
      if ( v3 )
        v3(this, 0LL);
    }
  }
  *((_QWORD *)this + 16) = 0LL;
  result = this;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  return result;
}
