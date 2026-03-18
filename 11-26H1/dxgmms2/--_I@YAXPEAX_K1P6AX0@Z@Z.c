/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1400377C8
 * Callers:
 *     ??1VIDMM_PARTITION@@QEAA@XZ @ 0x1400ABC7C (--1VIDMM_PARTITION@@QEAA@XZ.c)
 *     VidSchTerminateAdapter @ 0x1400C57F0 (VidSchTerminateAdapter.c)
 *     ??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1400C5E00 (--1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *v7; // rdi

  if ( a3 )
  {
    v5 = a3;
    v7 = &a1[a3 * a2];
    do
    {
      v7 -= a2;
      a4(v7);
      --v5;
    }
    while ( v5 );
  }
}
