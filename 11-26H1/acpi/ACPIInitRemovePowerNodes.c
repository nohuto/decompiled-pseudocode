/*
 * XREFs of ACPIInitRemovePowerNodes @ 0x140052648
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x14003666C (ACPIBuildDevicePowerNodes.c)
 *     ACPIInitDeleteDeviceExtension @ 0x140061CBC (ACPIInitDeleteDeviceExtension.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 */

void __fastcall ACPIInitRemovePowerNodes(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *i; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  void *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rcx
  __int64 *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx

  v2 = 0LL;
  do
  {
    for ( i = *(_QWORD **)(a1 + 8 * v2 + 408); i; i = (_QWORD *)*i )
    {
      v4 = i[5];
      if ( *(_QWORD **)(v4 + 8) != i + 5 || (v5 = (_QWORD *)i[6], (_QWORD *)*v5 != i + 5) )
LABEL_22:
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
    }
    v6 = *(void **)(a1 + 8 * v2 + 408);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x50706341u);
      *(_QWORD *)(a1 + 8 * v2 + 408) = 0LL;
    }
    v2 = (unsigned int)(v2 + 1);
  }
  while ( (unsigned int)v2 <= 4 );
  v7 = *(_QWORD **)(a1 + 448);
  if ( v7 )
  {
    do
    {
      v8 = v7[5];
      if ( *(_QWORD **)(v8 + 8) != v7 + 5 )
        goto LABEL_22;
      v9 = (_QWORD *)v7[6];
      if ( (_QWORD *)*v9 != v7 + 5 )
        goto LABEL_22;
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      v7 = (_QWORD *)*v7;
    }
    while ( v7 );
    ExFreePoolWithTag(*(PVOID *)(a1 + 448), 0x50706341u);
    *(_QWORD *)(a1 + 448) = 0LL;
  }
  v10 = (__int64 *)(a1 + 456);
  v11 = 5LL;
  do
  {
    if ( *v10 )
    {
      AMLIDereferenceHandleEx(*v10);
      *v10 = 0LL;
    }
    ++v10;
    --v11;
  }
  while ( v11 );
  v12 = *(_QWORD *)(a1 + 496);
  if ( v12 )
  {
    AMLIDereferenceHandleEx(v12);
    *(_QWORD *)(a1 + 496) = 0LL;
  }
}
