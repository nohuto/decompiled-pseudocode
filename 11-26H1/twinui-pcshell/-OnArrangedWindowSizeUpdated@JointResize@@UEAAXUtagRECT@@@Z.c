/*
 * XREFs of ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x180539720
 * Callers:
 *     <none>
 * Callees:
 *     ?ComputeExtendedViewRect@JointResize@@AEAA?AUtagRECT@@PEAUIApplicationView@@U2@@Z @ 0x180230E94 (-ComputeExtendedViewRect@JointResize@@AEAA-AUtagRECT@@PEAUIApplicationView@@U2@@Z.c)
 *     ?CalculatePointFromRect@JointResize@@AEAA?AUtagPOINT@@UtagRECT@@@Z @ 0x180538154 (-CalculatePointFromRect@JointResize@@AEAA-AUtagPOINT@@UtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall JointResize::OnArrangedWindowSizeUpdated(JointResize *this, struct tagRECT *a2)
{
  struct tagRECT *v4; // rax
  int left; // edx
  unsigned __int64 v6; // rcx
  LONG *p_top; // rdx
  LONG top; // r8d
  LONG v9; // eax
  __int64 (__fastcall ***v10)(ApplicationViewHelpers *, GUID *, __int64 *); // r8
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rcx
  _QWORD *v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  struct tagRECT v17; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT v18; // [rsp+30h] [rbp-20h] BYREF
  struct tagRECT v19; // [rsp+40h] [rbp-10h] BYREF
  struct tagRECT v20; // [rsp+60h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 192) )
  {
    v18 = *a2;
    JointResize::CalculatePointFromRect((JointResize *)((char *)this - 88), &v17, &v18.left);
    v4 = (struct tagRECT *)((char *)this + 208);
    left = *((_DWORD *)this + 52);
    if ( v17.left >= left )
    {
      left = v17.left;
      v4 = &v17;
    }
    v6 = *((unsigned int *)this + 54);
    if ( (int)v6 >= left )
      v6 = (unsigned int)v4->left;
    p_top = (LONG *)((char *)this + 212);
    v17.left = v6;
    top = *((_DWORD *)this + 53);
    if ( v17.top >= top )
    {
      top = v17.top;
      p_top = &v17.top;
    }
    v9 = *((_DWORD *)this + 55);
    if ( v9 >= top )
      v9 = *p_top;
    v17.top = v9;
    if ( (_DWORD)v6 != *((_DWORD *)this + 56) || v9 != *((_DWORD *)this + 57) )
    {
      v10 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*((_QWORD *)this + 15);
      v18 = *a2;
      *((_QWORD *)this + 28) = *(_QWORD *)&v17.left;
      v18 = *JointResize::ComputeExtendedViewRect((JointResize *)v6, &v19, v10, &v18);
      v11 = (_QWORD *)JointResize::CalculatePointFromRect((JointResize *)((char *)this - 88), &v20, &v18.left);
      v12 = *((_QWORD *)this + 13);
      if ( v12 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 48LL))(v12, *v11);
      if ( !*((_BYTE *)this + 368) )
      {
        v13 = (__int64 *)*((_QWORD *)this + 20);
        *((_BYTE *)this + 368) = 1;
        v14 = (_QWORD *)*((_QWORD *)this + 16);
        v15 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 17) - (_QWORD)v14) >> 5);
        v16 = *v13;
        if ( v15 == 1 )
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v16 + 40))(v13, *((_QWORD *)this + 15), *v14);
        else
          (*(void (__fastcall **)(__int64 *, _QWORD, unsigned __int64))(v16 + 32))(v13, *((_QWORD *)this + 15), v15);
      }
    }
  }
}
