/*
 * XREFs of ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x1801B06E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x1801B04E4 (-OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z.c)
 *     ?OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x1801B0838 (-OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1801B1360 (-Reset@EdgyImpl@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnTouchInfo(EdgyProcessorTarget *this, struct TouchInfo *a2)
{
  __int64 v4; // rcx
  EdgyProcessorTarget *v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0;
  if ( (a2->Flags & 0x400) != 0 )
  {
    *((_DWORD *)this + 6) = 1;
    *((_DWORD *)this + 18) = -1;
    *(_QWORD *)((char *)this + 76) = 0LL;
    *(_QWORD *)((char *)this + 84) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    v4 = *((_QWORD *)this + 14);
LABEL_23:
    EdgyImpl::Reset((EdgyImpl *)(v4 + 80));
    return 0LL;
  }
  if ( (a2->Flags & 1) != 0 )
  {
    v5 = (EdgyProcessorTarget *)((char *)this - 8);
    if ( *((_DWORD *)v5 + 9) != 2 && *((_DWORD *)v5 + 9) != 3 )
    {
      v6 = EdgyProcessorTarget::OnTouchSessionBegin(v5, a2);
      if ( v6 < 0 )
      {
        v7 = 459LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
          (const char *)(unsigned int)v6);
        return (unsigned int)v6;
      }
    }
  }
  if ( !*((_DWORD *)this + 6) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct TouchInfo *))(**((_QWORD **)this + 18) + 32LL))(
           *((_QWORD *)this + 18),
           a2);
    if ( v6 < 0 )
    {
      v7 = 464LL;
      goto LABEL_8;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 18) + 64LL))(
           *((_QWORD *)this + 18),
           &v13);
    if ( v6 < 0 )
    {
      v7 = 465LL;
      goto LABEL_8;
    }
    v6 = EdgyProcessorTarget::OnGestureUpdate((EdgyProcessorTarget *)((char *)this - 8), v13, v9, v10);
    if ( v6 < 0 )
    {
      v7 = 467LL;
      goto LABEL_8;
    }
  }
  if ( (a2->Flags & 4) != 0 )
  {
    v11 = *((_DWORD *)this + 6);
    if ( !v11 || v11 == 3 )
    {
      *((_DWORD *)this + 6) = 1;
LABEL_22:
      *((_DWORD *)this + 18) = -1;
      *(_QWORD *)((char *)this + 76) = 0LL;
      *(_QWORD *)((char *)this + 84) = 0LL;
      *((_QWORD *)this + 12) = 0LL;
      v4 = *((_QWORD *)this + 14);
      goto LABEL_23;
    }
    if ( v11 == 1 )
      goto LABEL_22;
  }
  return 0LL;
}
