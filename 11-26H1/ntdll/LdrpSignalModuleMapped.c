/*
 * XREFs of LdrpSignalModuleMapped @ 0x18011B26C
 * Callers:
 *     LdrpProcessMappedModule @ 0x180119E48 (LdrpProcessMappedModule.c)
 * Callees:
 *     LdrpQueueWork @ 0x180087FA0 (LdrpQueueWork.c)
 */

void __fastcall LdrpSignalModuleMapped(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  _DWORD *v4; // r8
  __int64 v5; // rcx
  int v6; // edx
  int v7; // eax

  v1 = *(_QWORD *)(a1 + 152);
  v2 = *(_QWORD **)(v1 + 48);
  if ( v2 )
  {
    v3 = *(_QWORD **)(v1 + 48);
    do
    {
      v3 = (_QWORD *)*v3;
      v4 = (_DWORD *)(v3[1] & 0xFFFFFFFFFFFFFFF8uLL);
      v5 = *(_QWORD *)(*(_QWORD *)v4 + 16LL);
      if ( v5 )
      {
        v6 = v4[14];
        v7 = *(_DWORD *)(v5 + 108) - 1;
        *(_DWORD *)(v5 + 108) = v7;
        if ( v6 != 5 && !v7 )
        {
          v4[14] = 4;
          LdrpQueueWork(v5);
        }
      }
    }
    while ( v3 != v2 );
  }
}
