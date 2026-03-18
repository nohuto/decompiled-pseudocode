/*
 * XREFs of ??1WO_CLEANUP@@QEAA@XZ @ 0x140301914
 * Callers:
 *     EngCreateWnd @ 0x140302300 (EngCreateWnd.c)
 * Callees:
 *     <none>
 */

void __fastcall WO_CLEANUP::~WO_CLEANUP(WO_CLEANUP *this, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_DWORD *)this )
  {
    v4 = (_DWORD *)*((_QWORD *)this + 1);
    if ( v4 )
    {
      *v4 = 0;
      Win32FreePool(*((void **)this + 1));
    }
    v5 = *((_QWORD *)this + 2);
    if ( v5 )
    {
      *(_DWORD *)(v5 + 152) = 0;
      Win32FreePool(*((void **)this + 2));
    }
    v6 = *((_QWORD *)this + 3);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 152) = 0;
      Win32FreePool(*((void **)this + 3));
    }
    if ( *((_QWORD *)this + 4) )
    {
      v8 = *((_QWORD *)this + 4);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
    }
    if ( *((_QWORD *)this + 5) )
    {
      v8 = *((_QWORD *)this + 5);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
    }
    if ( *((_QWORD *)this + 6) )
    {
      v8 = *((_QWORD *)this + 6);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
    }
    v7 = *((_QWORD *)this + 7);
    if ( v7 )
      GreDeleteSemaphore(v7, a2, a3);
  }
}
