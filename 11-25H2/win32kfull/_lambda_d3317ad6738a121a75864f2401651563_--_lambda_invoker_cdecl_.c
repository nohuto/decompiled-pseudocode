/*
 * XREFs of _lambda_d3317ad6738a121a75864f2401651563_::_lambda_invoker_cdecl_ @ 0x1402D3360
 * Callers:
 *     <none>
 * Callees:
 *     ?DecrementCounter@CDwmNotifyBatch@@IEAAXPEAUHWND__@@@Z @ 0x1402D342C (-DecrementCounter@CDwmNotifyBatch@@IEAAXPEAUHWND__@@@Z.c)
 */

void __fastcall lambda_d3317ad6738a121a75864f2401651563_::_lambda_invoker_cdecl_(CDwmNotifyBatch *a1)
{
  __int64 v1; // rax
  unsigned int v3; // edx
  HWND *v4; // rbx
  __int64 v5; // rdi

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(_DWORD *)(v1 + 28);
  v4 = *(HWND **)(v1 + 40);
  if ( v3 )
  {
    v5 = v3;
    do
    {
      if ( *v4 )
        CDwmNotifyBatch::DecrementCounter(a1, *v4);
      v4 += 21;
      --v5;
    }
    while ( v5 );
  }
  *((_QWORD *)a1 + 4) = 0LL;
}
