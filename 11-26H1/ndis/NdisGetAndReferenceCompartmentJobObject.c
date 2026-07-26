/*
 * XREFs of NdisGetAndReferenceCompartmentJobObject @ 0x1400568D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisGetAndReferenceCompartmentJobObject(unsigned int a1, unsigned int *a2, __int64 a3)
{
  KIRQL v6; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v7; // r9
  KIRQL v8; // si
  unsigned int v9; // ebx
  unsigned int v11; // eax
  char *v12; // r15
  char *v13; // r14

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  v7 = qword_14011E9D8;
  v8 = v6;
  while ( 1 )
  {
    if ( v7 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8 )
      goto LABEL_5;
    if ( *((_DWORD *)v7 + 4) == a1 )
      break;
    if ( *((_DWORD *)v7 + 4) > a1 )
      goto LABEL_5;
    v7 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v7;
  }
  if ( !v7 )
  {
LABEL_5:
    *a2 = 0;
    v9 = -1073741275;
    goto LABEL_6;
  }
  v11 = *((_DWORD *)v7 + 430);
  if ( v11 <= *a2 )
  {
    v9 = 0;
    v12 = (char *)v7 + 1728;
    *a2 = 0;
    v13 = (char *)*((_QWORD *)v7 + 216);
    if ( v13 != (char *)v7 + 1728 )
    {
      do
      {
        ObfReferenceObject(*((PVOID *)v13 + 2));
        *(_QWORD *)(a3 + 8LL * (*a2)++) = *((_QWORD *)v13 + 2);
        v13 = *(char **)v13;
      }
      while ( v13 != v12 );
    }
  }
  else
  {
    *a2 = v11;
    v9 = 261;
  }
LABEL_6:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v8);
  return v9;
}
