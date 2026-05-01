/*
 * XREFs of std::_Partition_by_median_guess_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x180316E9C
 * Callers:
 *     std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18013A96C (std--_Sort_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___.c)
 * Callees:
 *     std::_Med3_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x180316E24 (std--_Med3_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___.c)
 */

__int64 ****__fastcall std::_Partition_by_median_guess_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
        __int64 ****a1,
        __int64 ***a2,
        unsigned __int64 a3)
{
  __int64 ***v3; // r15
  __int64 ***v5; // rsi
  __int64 v6; // rbx
  __int64 ***v9; // rcx
  __int64 v10; // r11
  __int64 v11; // rbx
  __int64 ***v12; // rdi
  __int64 v13; // r11
  __int64 ***v14; // rdx
  __int64 ***v15; // r8
  __int64 **v16; // rdx
  __int64 *v17; // rcx
  __int64 ***v18; // r8
  __int64 **v19; // rax
  __int64 **v20; // rcx
  __int64 v21; // rax
  __int64 **v22; // r8
  __int64 ***v23; // r9
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 *v26; // rcx
  __int64 ***v27; // r11
  bool v28; // zf
  __int64 ***v29; // r10
  __int64 *v30; // rax
  __int64 **v31; // rax
  __int64 **v32; // rcx
  __int64 **v33; // rcx
  __int64 **v34; // rcx
  __int64 **v35; // rcx
  __int64 **v36; // rcx
  __int64 ***v37; // r10
  __int64 **v38; // rcx
  __int64 **v39; // rcx
  __int64 **v40; // rcx
  __int64 **v41; // rcx
  __int64 **v42; // rcx
  __int64 **v43; // rcx
  __int64 ****result; // rax

  v3 = (__int64 ***)(a3 - 16);
  v5 = &a2[2 * ((__int64)(a3 - (_QWORD)a2) >> 5)];
  v6 = (__int64)(a3 - 16 - (_QWORD)a2) >> 4;
  v9 = a2;
  if ( v6 <= 40 )
  {
    v15 = (__int64 ***)(a3 - 16);
  }
  else
  {
    v10 = (v6 + 1) >> 3;
    v11 = 16 * v10;
    v12 = &a2[2 * v10];
    std::_Med3_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
      a2,
      v12,
      &a2[4 * v10]);
    std::_Med3_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
      &v5[v11 / 0xFFFFFFFFFFFFFFF8uLL],
      v5,
      &v5[(unsigned __int64)v11 / 8]);
    std::_Med3_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
      (__int64 ***)((char *)v3 - v13),
      &v3[v11 / 0xFFFFFFFFFFFFFFF8uLL],
      v3);
    v15 = v14;
    v9 = v12;
  }
  std::_Med3_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(v9, v5, v15);
  v16 = (__int64 **)(v5 + 2);
  if ( a2 < v5 )
  {
    v17 = **v5;
    do
    {
      v18 = v5 - 2;
      v19 = *(v5 - 2);
      if ( (__int64)v17 < (__int64)*v19 )
        break;
      if ( (__int64)v17 > (__int64)*v19 )
        break;
      v17 = *v19;
      v5 -= 2;
    }
    while ( a2 < v18 );
  }
  if ( (unsigned __int64)v16 < a3 )
  {
    v20 = *v5;
    do
    {
      v21 = **v16;
      if ( (__int64)*v20 < v21 )
        break;
      if ( (__int64)*v20 > v21 )
        break;
      v16 += 2;
    }
    while ( (unsigned __int64)v16 < a3 );
  }
  v22 = v16;
  v23 = v5;
  while ( 1 )
  {
    while ( (unsigned __int64)v22 < a3 )
    {
      v24 = **v22;
      if ( v24 < (__int64)**v5 )
        goto LABEL_20;
      if ( v24 > (__int64)**v5 )
        break;
      if ( v16 != v22 )
      {
        v25 = *v16;
        *v16 = *v22;
        *v22 = v25;
        v26 = v16[1];
        v16[1] = v22[1];
        v22[1] = v26;
      }
      v16 += 2;
LABEL_20:
      v22 += 2;
    }
    v27 = v23;
    v28 = v23 == a2;
    if ( v23 > a2 )
    {
      v29 = v23 - 2;
      do
      {
        v30 = **v5;
        if ( (__int64)v30 >= (__int64)**v29 )
        {
          if ( (__int64)v30 > (__int64)**v29 )
            break;
          v5 -= 2;
          if ( v5 != v29 )
          {
            v31 = *v5;
            *v5 = *v29;
            *v29 = v31;
            v32 = v5[1];
            v5[1] = v29[1];
            v29[1] = v32;
          }
        }
        v23 -= 2;
        v29 -= 2;
        v27 = v23;
      }
      while ( a2 < v23 );
      v28 = v23 == a2;
    }
    if ( v28 )
      break;
    v23 -= 2;
    if ( v22 != (__int64 **)a3 )
    {
      v42 = (__int64 **)*v22;
      *v22 = (__int64 *)*(v27 - 2);
      *(v27 - 2) = v42;
      v43 = (__int64 **)v22[1];
      v22[1] = (__int64 *)*(v27 - 1);
      *(v27 - 1) = v43;
      goto LABEL_20;
    }
    v5 -= 2;
    v37 = v5 + 1;
    if ( v27 - 2 != v5 )
    {
      v38 = *v23;
      *v23 = *v5;
      *v5 = v38;
      v39 = v23[1];
      v23[1] = *v37;
      *v37 = v39;
    }
    v40 = *v5;
    v16 -= 2;
    *v5 = (__int64 **)*v16;
    *v16 = (__int64 *)v40;
    v41 = *v37;
    *v37 = (__int64 **)v16[1];
    v16[1] = (__int64 *)v41;
  }
  if ( v22 != (__int64 **)a3 )
  {
    if ( v16 != v22 )
    {
      v33 = *v5;
      *v5 = (__int64 **)*v16;
      *v16 = (__int64 *)v33;
      v34 = v5[1];
      v5[1] = (__int64 **)v16[1];
      v16[1] = (__int64 *)v34;
    }
    v35 = *v5;
    v16 += 2;
    *v5 = (__int64 **)*v22;
    *v22 = (__int64 *)v35;
    v36 = v5[1];
    v5[1] = (__int64 **)v22[1];
    v5 += 2;
    v22[1] = (__int64 *)v36;
    goto LABEL_20;
  }
  result = a1;
  *a1 = v5;
  a1[1] = (__int64 ***)v16;
  return result;
}
